@class NSData;

@interface HMFPairingKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;

+ (void)setClassMappingForNSCoder;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPairingKeyData:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
