@interface _SWCPrefs : NSObject

@property (class, readonly) _SWCPrefs *sharedPrefs;

@property (readonly) unsigned long long maximumRetryCount;
@property (readonly) double retryIntervalAfterFailure;
@property (readonly) double retryIntervalAfterSuccess;
@property (readonly) char verifyExtendedValidation;
@property (readonly, getter=isAppleInternal) char appleInternal;
@property (readonly, getter=isFastCheckEnabled) char fastCheckEnabled;

- (id)_init;
- (void)_setString:(id)a0 forKey:(id)a1;
- (char)_boolForKey:(id)a0 defaultValue:(char)a1;
- (unsigned long long)_recheckFuzzForSuccess:(char)a0;
- (id)_stringForKey:(id)a0 defaultValue:(id)a1;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1;
- (unsigned long long)_unsignedIntegerForKey:(id)a0 defaultValue:(unsigned long long)a1 minimumValue:(unsigned long long)a2 maximumValue:(unsigned long long)a3;
- (id)containerURLReturningError:(id *)a0;
- (id)descriptionOfAllPrefs;
- (double)retryIntervalAfterReachLimitWithFailure:(unsigned long long)a0;
- (double)retryIntervalAfterSuccess:(char)a0;

@end
