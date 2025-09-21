@class NSString;

@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) char initializeReadyForInteraction;
@property (readonly, nonatomic) char resetDarkBootState;
@property (readonly, nonatomic) char shouldWaitForMigrator;
@property (readonly, nonatomic) double systemSleepInterval;
@property (readonly, copy, nonatomic) id /* block */ registerAdditionalServicesBlock;
@property (readonly, nonatomic) char initializeDisplayManager;
@property (readonly, copy, nonatomic) NSString *independentWatchdogPortName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithOptions:(id)a0;

@end
