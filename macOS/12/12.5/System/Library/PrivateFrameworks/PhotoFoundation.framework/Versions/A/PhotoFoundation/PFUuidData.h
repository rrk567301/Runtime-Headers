@class NSString, NSData;

@interface PFUuidData : NSData {
    unsigned char _uuid[16];
}

@property (readonly, nonatomic) NSString *canonicalStringValue;
@property (readonly, nonatomic) NSString *mercuryStringValue;
@property (readonly, nonatomic) NSData *dataValue;
@property (readonly, nonatomic) BOOL isNull;

+ (id)uuidWithBytes:(const void *)a0 length:(unsigned long long)a1;
+ (id)uuidWithData:(id)a0;
+ (BOOL)isMercuryBase64String:(id)a0;
+ (BOOL)isCanonicalUuidString:(id)a0;
+ (BOOL)isMercuryUuidString:(id)a0;
+ (id)randomUuid;
+ (id)uuidWithString:(id)a0;
+ (id)nullUuid;
+ (BOOL)isSupportedUuidString:(id)a0;
+ (id)generateUuidAsCanonicalString;
+ (id)generateUuidAsMercuryString;
+ (id)hostUuid;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (const void *)bytes;
- (Class)classForCoder;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqualToData:(id)a0;
- (id)initWithMercuryBase64String:(id)a0;
- (id)initRandom;
- (id)initNull;

@end
