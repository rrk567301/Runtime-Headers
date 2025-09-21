@class NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface _DASConfigurationLimiter : NSObject <_DASLimits>

@property (retain, nonatomic) NSString *limitationName;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSMutableArray *testingOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)intervalLimiterResponseForActivity:(id)a0;
+ (id)sharedLimiter;

- (id)init;
- (void).cxx_destruct;
- (char)deleteLimitForActivity:(id)a0;
- (char)limitedActivity:(id)a0 withLimitsResponses:(id)a1;
- (char)limitsApplyToActivity:(id)a0;
- (id)responseWithActivityConfigurations:(id)a0;
- (char)setLimitForActivity:(id)a0;
- (id)shouldLimitActivityAtSubmission:(id)a0;

@end
