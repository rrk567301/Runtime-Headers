@class ATXActionResponse, ATXPredictionContext;

@interface ATXActionSessionLog : NSObject {
    unsigned long long _engagementType;
    ATXActionResponse *_actionResponse;
    ATXPredictionContext *_context;
    char _isShadowLog;
}

+ (double)_bucketize:(double)a0 bucketSize:(double)a1;
+ (char)isLockscreenSession:(unsigned char)a0;
+ (char)isLowConfidenceSession:(id)a0;
+ (char)isSessionNotUsefulForTraining:(int)a0 actionResponse:(id)a1;
+ (char)isSessionWithoutEngagement:(int)a0;
+ (void)logActionData:(id)a0;
+ (void)logIntentPredictionSession:(id)a0;
+ (void)performSessionLoggingWithActionResponse:(id)a0 engagementType:(unsigned long long)a1 context:(id)a2 isShadowLog:(char)a3 forTestingMode:(char)a4;
+ (double)roundedElapsedTimeWithStartDate:(id)a0 endDate:(id)a1 accuracy:(double)a2;

- (id)init;
- (void).cxx_destruct;
- (id)constructActionDataDictionaryWithEngagedIndicesOut:(id *)a0 andAWDActionOut:(id *)a1 andEngagementTypeFound:(unsigned long long *)a2 forTestingMode:(char)a3;
- (id)constructSessionLogDictionaryWithAWDSessionOut:(id *)a0 forTestingMode:(char)a1;
- (id)initWithActionEngagementType:(unsigned long long)a0 actionResponse:(id)a1 context:(id)a2 isShadowLog:(char)a3;
- (void)performSessionLogging:(char)a0;

@end
