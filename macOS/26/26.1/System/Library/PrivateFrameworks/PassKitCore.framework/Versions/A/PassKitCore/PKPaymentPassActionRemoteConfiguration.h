@interface PKPaymentPassActionRemoteConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL requiresAppletData;
@property (readonly, nonatomic) BOOL appletDataRequiresEncryption;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithRequiresAppletData:(BOOL)a0 appletDataRequiresEncryption:(BOOL)a1;

@end
