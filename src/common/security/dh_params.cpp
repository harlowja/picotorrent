#include <picotorrent/common/security/dh_params.hpp>

using picotorrent::common::security::dh_params;

std::shared_ptr<DH> dh_params::get()
{
    static unsigned char dh4096_p[] = {
        0xD7,0xDB,0x7A,0x4C,0xBE,0x6D,0x88,0xED,0xF0,0x28,0xE0,0x40,
        0xE4,0x8C,0x02,0xC5,0x35,0x2F,0x82,0xA9,0xFA,0x7F,0x11,0x26,
        0x69,0x1E,0x18,0xB9,0xB3,0x43,0x3F,0xCD,0x30,0x1C,0x70,0x9E,
        0x58,0x18,0xAA,0xBC,0x34,0xF8,0x2D,0x2D,0xB4,0x18,0x69,0x78,
        0x8F,0x44,0x68,0x76,0x12,0x24,0x49,0x50,0x83,0xB9,0x84,0x98,
        0xD4,0xF8,0x38,0x27,0x2C,0xC0,0x70,0x56,0xA2,0x5F,0xCD,0x28,
        0xD1,0xFE,0x6E,0xD7,0xD0,0x55,0xC7,0x73,0x37,0xF3,0x02,0x42,
        0x52,0xC5,0xAB,0x8A,0xCC,0x3E,0x7E,0xE2,0xC3,0x24,0x5B,0x31,
        0xE3,0xA4,0x17,0x89,0x0F,0xE7,0x93,0xA5,0x62,0x43,0x5C,0xC6,
        0x12,0x74,0x9C,0x33,0x7B,0xF3,0x8B,0x7E,0x4E,0x75,0xD8,0x41,
        0x02,0x63,0x3B,0x2B,0x76,0x79,0x30,0xA0,0xEE,0x44,0xFF,0xC1,
        0x73,0xED,0xDE,0x45,0x95,0x81,0x72,0x11,0x42,0xF7,0xDC,0xFB,
        0x10,0xF5,0x41,0xCD,0x3B,0xC2,0x2E,0x22,0x1E,0x18,0xBB,0x22,
        0x3A,0x0D,0x8C,0x51,0xC4,0x01,0xB6,0x86,0x07,0x52,0xA1,0x36,
        0xA0,0x27,0x72,0x75,0xD5,0x30,0xF1,0xDB,0xE5,0x20,0x84,0x86,
        0x42,0xE3,0x58,0x93,0x78,0x23,0x08,0x44,0xB1,0xF9,0x7F,0xB3,
        0x27,0x4A,0x89,0x6D,0x97,0x0C,0xA2,0xF8,0x1E,0x18,0x0E,0xB1,
        0x6D,0x02,0xF1,0xB9,0x75,0x73,0xCE,0x9F,0x37,0x51,0xE8,0xBA,
        0x46,0x8D,0x88,0x85,0x67,0xA6,0x7F,0x9A,0x1D,0x52,0x9A,0xA9,
        0x82,0x35,0x52,0xBD,0x47,0x91,0x67,0x97,0xB0,0x0C,0xAA,0xDC,
        0xC0,0xA7,0xE1,0x7F,0x79,0xE9,0x07,0xDA,0x37,0x96,0x1A,0x76,
        0xFF,0x78,0x59,0x58,0x4A,0xCC,0xEC,0x37,0x6A,0x83,0xE5,0xCB,
        0x01,0xD6,0xF5,0x62,0x28,0x79,0x90,0x0B,0xF5,0x60,0x6B,0x39,
        0x09,0xD8,0xB5,0x58,0xFF,0xE9,0x03,0x88,0xCA,0x20,0x3F,0xB9,
        0xC1,0x3D,0x14,0xB6,0x21,0xFA,0xD4,0xA0,0xB5,0xCF,0x55,0xDF,
        0xEF,0x28,0x48,0x97,0x9B,0x1E,0xB3,0x79,0x20,0x99,0xE9,0x8D,
        0xBC,0x4C,0x7B,0x84,0xF9,0x0A,0xE2,0x76,0xCF,0xC3,0x58,0xD6,
        0x60,0x71,0xF1,0x5C,0xC7,0xC0,0x2C,0x5D,0x51,0xEA,0xD4,0xD9,
        0x3E,0x16,0x7A,0xAA,0x86,0xEF,0x89,0x69,0x07,0x32,0xC2,0xA0,
        0xC5,0xDE,0x32,0x50,0xDD,0x55,0xCF,0xEB,0x5B,0x25,0xCF,0x2D,
        0x4B,0xAD,0x64,0xE0,0x7B,0xEA,0xE8,0x8D,0x23,0x99,0xAC,0xFE,
        0xE7,0x64,0x95,0x90,0x79,0x56,0xA5,0x3A,0xCA,0xE2,0x0D,0xA0,
        0x6A,0xEC,0x0F,0x09,0x49,0x5E,0xB4,0x26,0xAF,0x1F,0x3F,0x48,
        0xA5,0x2C,0x5B,0x4A,0x70,0x20,0x3F,0xE4,0xED,0xC0,0x3C,0x32,
        0x7B,0x57,0x06,0x2D,0x35,0x39,0xD7,0x04,0x49,0xBD,0x8B,0xF5,
        0x9D,0x3A,0x92,0x9D,0x65,0x80,0xC5,0x18,0x23,0x17,0xEB,0xBD,
        0x08,0xFA,0x3D,0x05,0x21,0xED,0x6A,0x92,0xF0,0x4F,0xAD,0xA0,
        0x20,0xF2,0xEE,0x2E,0xFF,0x23,0x24,0x11,0xEE,0x0E,0xE3,0xBD,
        0xD0,0x1C,0xEC,0x30,0x37,0xBA,0x8D,0x40,0x94,0xD1,0x11,0x7D,
        0xF9,0xC3,0xE0,0xC4,0x4E,0x1D,0xE7,0x7A,0x8E,0x74,0x81,0xD7,
        0xB4,0xD4,0xFA,0x10,0x99,0x55,0xCD,0xE3,0xE4,0x0E,0xB7,0xF2,
        0x03,0xD3,0x2D,0x12,0xC4,0xD4,0x98,0xE5,0x4C,0x4E,0x85,0xAE,
        0xBA,0x5E,0x0C,0x38,0x8C,0xDE,0x74,0x33,
    };

    static unsigned char dh4096_g[] = {
        0x02,
    };

    std::shared_ptr<DH> dh = std::shared_ptr<DH>(DH_new(), DH_free);
    dh->p = BN_bin2bn(dh4096_p, sizeof(dh4096_p), NULL);
    dh->g = BN_bin2bn(dh4096_g, sizeof(dh4096_g), NULL);

    return dh;
}