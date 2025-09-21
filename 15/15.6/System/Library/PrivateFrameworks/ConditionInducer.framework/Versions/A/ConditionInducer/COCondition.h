@class NSArray, NSString;

@interface COCondition : NSObject <COConditionProtocol>

@property (retain, nonatomic) NSArray *additionalArguments;
@property (readonly) NSString *userFriendlyName;
@property (readonly) NSString *identifierName;
@property (readonly) char persistsAfterReboot;
@property (readonly) char isDestructive;
@property (readonly) char isInternalOnly;
@property (readonly) char active;

+ (id)description;
+ (id)info;
+ (id)profileFriendlyName;

- (id)init;
- (void).cxx_destruct;
- (void)tearDown;
- (char)setUp;
- (char)getBoolProperty:(id)a0 fromDict:(id)a1 withDefault:(char)a2;
- (char)getBoolProperty:(id)a0 withDefault:(char)a1;
- (id)getStringProperty:(id)a0 fromDict:(id)a1 withDefault:(id)a2;
- (id)getStringProperty:(id)a0 withDefault:(id)a1;
- (id)identifierNameFromDict:(id)a0;
- (char)isDestructiveFromDict:(id)a0;
- (char)isInternalOnlyFromDict:(id)a0;
- (char)persistsAfterRebootFromDict:(id)a0;
- (id)userFriendlyNameFromDict:(id)a0;

@end
