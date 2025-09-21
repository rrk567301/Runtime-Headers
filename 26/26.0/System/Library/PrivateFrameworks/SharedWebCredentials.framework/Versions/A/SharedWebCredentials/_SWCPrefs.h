@interface _SWCPrefs : NSObject

@property (class, readonly) _SWCPrefs *sharedPrefs;

@property (readonly) unsigned long long maximumRetryCount;
@property (readonly) double retryIntervalAfterFailure;
@property (readonly) double retryIntervalAfterSuccess;
@property (readonly) BOOL verifyExtendedValidation;
@property (readonly, getter=isAppleInternal) BOOL appleInternal;
@property (readonly, getter=isFastCheckEnabled) BOOL fastCheckEnabled;

- (id)_init;
- (BOOL)_boolForKey:(id)a0 defaultValue:(BOOL)a1;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1;
- (id)_stringForKey:(id)a0 defaultValue:(id)a1;
- (double)retryIntervalAfterSuccess:(BOOL)a0;
- (double)retryIntervalAfterReachLimitWithFailure:(unsigned long long)a0;
- (void)_setString:(id)a0 forKey:(id)a1;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1 minimumValue:(unsigned long long)a2 maximumValue:(unsigned long long)a3;
- (unsigned long long)_recheckFuzzForSuccess:(BOOL)a0;
- (id)descriptionOfAllPrefs;
- (id)containerURLReturningError:(id *)a0;

@end
