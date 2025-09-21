@class NSString;

@interface OISFUZipOutputEntry : NSObject {
    NSString *name;
    unsigned long long utf8NameLength;
    char isCompressed;
    char isEncrypted;
    unsigned int time;
    unsigned long long compressedSize;
    unsigned long long uncompressedSize;
    unsigned long long offset;
    unsigned long long compressedDataOffset;
    unsigned int crc;
    char isWrittenDirectlyToFile;
    char is64Bit;
}

- (void)dealloc;
- (id)description;
- (long long)compareByOffset:(id)a0;

@end
