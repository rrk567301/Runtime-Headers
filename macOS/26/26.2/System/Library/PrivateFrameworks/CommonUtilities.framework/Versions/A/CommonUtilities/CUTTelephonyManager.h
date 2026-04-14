@class NSMutableSet, NSRecursiveLock;

@interface CUTTelephonyManager : NSObject

@property (nonatomic) BOOL registered;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableSet *disableFastDormancyTokens;
@property (readonly, nonatomic) BOOL disableFastDormancy;

+ (id)sharedInstance;

- (void)_adjustFastDormancyTokens;
- (void)_setFastDormancySuspended:(BOOL)a0;
- (void).cxx_destruct;
- (void)__adjustFastDormancyTokens;
- (void)addFastDormancyDisableToken:(id)a0;
- (id)init;
- (void)removeFastDormancyDisableToken:(id)a0;
- (void)dealloc;

@end
