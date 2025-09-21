@interface APDefaults : NSObject

@property (class) char APSDevelopmentEnvironment;
@property (class) char isApprover;
@property (class) char isRequester;
@property (class) char retryNotificationRegistration;

+ (void)_setBool:(char)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (char)_boolForKey:(id)a0 defaultValue:(char)a1;
+ (id)_valueForKey:(id)a0;
+ (char)_boolForKey:(id)a0 defaultValue:(char)a1 domain:(struct __CFString { } *)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1 domain:(struct __CFString { } *)a2;
+ (void)_setBool:(char)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (void)_setInteger:(long long)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (id)_valueForKey:(id)a0 domain:(struct __CFString { } *)a1;

@end
