@class NSString, NSData;

@interface KHDBUuidData : NSData {
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSString *mercuryStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;

+ (id)uuidWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)uuidWithData:(id)a0;
+ (id)uuidWithString:(id)a0;
+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (BOOL)isCanonicalUuidString:(id)a0;
+ (BOOL)isMercuryBase64String:(id)a0;
+ (BOOL)isMercuryUuidString:(id)a0;
+ (BOOL)isSupportedUuidString:(id)a0;
+ (id)nullUuid;
+ (id)randomUuid;

- (const void *)bytes;
- (Class)classForArchiver;
- (unsigned long long)length;
- (id)initWithData:(id)a0;
- (id)description;
- (id)init;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForCoder;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (Class)classForPortCoder;
- (id)initNull;
- (id)initRandom;
- (id)initWithMercuryBase64String:(id)a0;

@end
