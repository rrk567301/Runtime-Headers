@class NSUUID;

@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *identifier;
@property (readonly) BOOL isDefault;

+ (id)defaultInstanceIdentifier;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isDefault;
- (BOOL)isEqualInstanceIdentifier:(id)a0;

@end
