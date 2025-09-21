@class NSString;

@interface ASCLockupFeatureSingleSignOn : NSObject <ASCLockupFeature>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char requiresSSOEntitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequiresSSOEntitlement:(char)a0;

@end
