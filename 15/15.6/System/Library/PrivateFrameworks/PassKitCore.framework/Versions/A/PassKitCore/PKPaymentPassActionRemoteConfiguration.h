@interface PKPaymentPassActionRemoteConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char requiresAppletData;
@property (readonly, nonatomic) char appletDataRequiresEncryption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithRequiresAppletData:(char)a0 appletDataRequiresEncryption:(char)a1;

@end
