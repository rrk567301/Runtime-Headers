@class LSApplicationIdentity;

@interface IPInstallableStateData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) LSApplicationIdentity *identity;
@property (readonly, nonatomic, getter=isInstalling) char installing;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0 isInstalling:(char)a1;

@end
