@class NSString;

@interface CRKConcreteMCXPrimitives_macOS : NSObject <CRKMCXPrimitives>

@property (readonly, copy, nonatomic) NSString *applicationIdentifier;

+ (char)isForceTypeKey:(id)a0;
+ (char)isAllowTypeKey:(id)a0;
+ (char)defaultBoolValueForKey:(id)a0;

- (void).cxx_destruct;
- (id)arrayForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (id)initWithApplicationIdentfier:(id)a0;
- (char)isKeyUserModifiable:(id)a0;
- (id)propertyListValueForKey:(id)a0;
- (void)setPropertyListValue:(void *)a0 forKey:(id)a1;

@end
