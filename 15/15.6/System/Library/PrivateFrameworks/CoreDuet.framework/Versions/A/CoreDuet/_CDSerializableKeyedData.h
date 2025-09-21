@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject <NSCopying> {
    NSData *_encodedKey;
    unsigned char _keyChecksum;
    unsigned char _dataChecksum;
    char _dataChecksumNeedsUpdate;
    NSString *_key;
    NSData *_data;
}

+ (id)log;
+ (unsigned char)byteChecksumOfData:(id)a0;
+ (id)dataDeseralizedFrom:(void *)a0 maxSize:(unsigned long long)a1 checksum:(char *)a2 bytesRead:(unsigned long long *)a3;
+ (id)errorForInvalidKeyEncoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)serializeData:(id)a0 withChecksum:(unsigned char)a1 to:(void *)a2;

@end
