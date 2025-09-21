@interface APDefaults : NSObject

@property (class) unsigned long long notificationEnvironment;
@property (class) BOOL isApprover;
@property (class) BOOL isRequester;
@property (class) BOOL retryNotificationRegistration;
@property (class) BOOL APSDevelopmentEnvironment;

+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1 domain:(struct __CFString { } *)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1 domain:(struct __CFString { } *)a2;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (void)_setInteger:(long long)a0 forKey:(id)a1;
+ (id)_valueForKey:(id)a0 domain:(struct __CFString { } *)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (void)_setBool:(BOOL)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (id)_valueForKey:(id)a0;
+ (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;

@end
