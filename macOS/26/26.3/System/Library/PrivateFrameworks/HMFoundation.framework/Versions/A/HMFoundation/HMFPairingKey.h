@class NSData;

@interface HMFPairingKey : HMFObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;

+ (void)setClassMappingForNSCoder;

- (id)init;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPairingKeyData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
