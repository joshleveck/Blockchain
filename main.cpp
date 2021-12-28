#include "./Blockchain/Blockchain.h"
#include <iostream>
#include "./SHA256/sha256.h"
#include <sstream>

int main()
{
    Blockchain block_chain = Blockchain();
    std::cout << "Mining block 1..." << std::endl;
    block_chain.add_block(Block(1, "Block 1 Data"));

    std::cout << "Mining block 2..." << std::endl;
    block_chain.add_block(Block(2, "Block 2 Data"));

    std::cout << "Mining block 3..." << std::endl;
    block_chain.add_block(Block(3, "Block 3 Data"));

    std::vector<Block> chain = block_chain.get_chain();

    for (int i = 0; i < chain.size(); i++)
    {
        std::cout << i << ". " << chain[i].get_data() << std::endl;
        std::cout << chain[i].get_hash() << std::endl;
    }

    return 0;
}