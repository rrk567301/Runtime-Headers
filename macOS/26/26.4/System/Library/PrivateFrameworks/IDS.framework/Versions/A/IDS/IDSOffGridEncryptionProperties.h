@class NSNumber, NSData;

@interface IDSOffGridEncryptionProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *ratchetCounter;
@property (retain, nonatomic) NSData *encryptionKeyID;
@property (retain, nonatomic) NSData *authTag;
@property (retain, nonatomic) NSNumber *segmentNumber;
@property (retain, nonatomic) NSNumber *totalSegments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
