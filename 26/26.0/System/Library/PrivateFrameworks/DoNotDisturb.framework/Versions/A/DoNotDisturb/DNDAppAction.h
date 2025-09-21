@class NSString, NSData, LNAction;

@interface DNDAppAction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) LNAction *rawAction;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSData *encodedAction;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) LNAction *action;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

+ (id)appActionFromDictionaryRepresentation:(id)a0;
+ (BOOL)archivingIsSupported:(id *)a0;
+ (BOOL)runtimeIsSupported:(id *)a0;

- (id)action;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)effectiveBundleIdentifier;
- (id)_initWithAction:(id)a0 bundleIdentifier:(id)a1 actionIdentifier:(id)a2 encodedAction:(id)a3 enabled:(BOOL)a4;
- (id)initWithAction:(id)a0 enabled:(BOOL)a1;
- (id)initWithEncodedAction:(id)a0 actionIdentifier:(id)a1 bundleIdentifier:(id)a2 enabled:(BOOL)a3;

@end
