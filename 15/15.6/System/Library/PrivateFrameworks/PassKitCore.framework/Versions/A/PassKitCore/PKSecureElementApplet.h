@class NSString;

@interface PKSecureElementApplet : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *packageIdentifier;
@property (readonly, nonatomic) unsigned long long lifecycleState;
@property (readonly, nonatomic, getter=isLocked) char locked;
@property (readonly, nonatomic) char containsSubKeys;

+ (id)secureElementAppletWithInternalApplet:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 lifecycleState:(unsigned long long)a1;
- (id)initWithIdentifier:(id)a0 packageIdentifier:(id)a1 lifecycleState:(unsigned long long)a2;
- (id)initWithIdentifier:(id)a0 packageIdentifier:(id)a1 lifecycleState:(unsigned long long)a2 locked:(char)a3 containsSubKeys:(char)a4;

@end
