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

- (id)initWithData:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (Class)classForArchiver;
- (Class)classForCoder;
- (const void *)bytes;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (id)description;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)length;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (Class)classForPortCoder;
- (id)initNull;
- (id)initRandom;
- (id)initWithMercuryBase64String:(id)a0;

@end
