#include "EncryptedFileSender.h"

EncryptedFileSender::EncryptedFileSender(std::string aes_key) :
	_aes_key(aes_key) {}

void EncryptedFileSender::set_key(char* key, int key_length)
{

}

void EncryptedFileSender::send_local_file(std::filesystem::path path,
	boost::asio::ip::tcp::socket& socket) {

}