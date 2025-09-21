@class NSString, NSData, LNAction;

@interface DNDAppAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) LNAction *rawAction;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSData *encodedAction;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, nonatomic, getter=isEnabled) char enabled;

+ (id)appActionFromDictionaryRepresentation:(id)a0;
+ (char)archivingIsSupported:(id *)a0;
+ (char)runtimeIsSupported:(id *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(char)a0;
- (id)effectiveBundleIdentifier;
- (id)dictionaryRepresentation;
- (id)action;
- (id)_initWithAction:(id)a0 bundleIdentifier:(id)a1 actionIdentifier:(id)a2 encodedAction:(id)a3 enabled:(char)a4;
- (id)initWithAction:(id)a0 enabled:(char)a1;
- (id)initWithEncodedAction:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 enabled:(char)a3;

@end
