@class NSUserDefaults, NSMutableDictionary, NSDictionary;

@interface NSUserDefaultsController : NSController {
    NSUserDefaults *_defaults;
    NSMutableDictionary *_valueBuffer;
    NSDictionary *_initialValues;
    struct __userDefaultsControllerFlags { unsigned char _sharedInstance : 1; unsigned char _appliesImmediately : 1; unsigned int _reservedUserDefaultsController : 30; } _userDefaultsControllerFlags;
}

@property (class, readonly) NSUserDefaultsController *sharedUserDefaultsController;

@property (readonly) NSUserDefaults *defaults;
@property (copy) NSDictionary *initialValues;
@property BOOL appliesImmediately;
@property (readonly) BOOL hasUnappliedChanges;
@property (readonly) id values;

+ (id)_nonAutomaticObservingKeys;
+ (id)_keyValueBindingAccessPoints;
+ (id)_modelAndProxyKeys;

- (id)description;
- (id)init;
- (void)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)awakeAfterUsingCoder:(id)a0;
- (void)_dealloc;
- (id)_singleMutableArrayValueForKey:(id)a0;
- (id)_singleValueForKey:(id)a0;
- (void)_setSingleValue:(id)a0 forKey:(id)a1;
- (void)_invokeSingleSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2;
- (id)_controllerKeys;
- (void)_executeSave:(id)a0 didCommitSuccessfully:(BOOL)a1 actionSender:(id)a2;
- (id)initWithDefaults:(id)a0 initialValues:(id)a1;
- (void)_setDefaults:(id)a0;
- (id)_valueBuffer;
- (void)_applyValue:(id)a0 forKey:(id)a1 registrationDomain:(id)a2;
- (void)_applyAllValuesFromValueBuffer;
- (void)revert:(id)a0;
- (void)save:(id)a0;
- (void)revertToInitialValues:(id)a0;
- (BOOL)_isSharedUserDefaultsControllerProxy;
- (void)_setSharedUserDefaultsControllerProxy:(BOOL)a0;

@end
