@class NSObject;
@protocol OS_dispatch_queue;

@interface SSREnrollmentQualityUtils : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (BOOL)isPremiumAssetAvailableForEnrollment:(id)a0 configVersion:(id *)a1;

- (void).cxx_destruct;
- (id)init;
- (id)retrieveProfileForLocale:(id)a0 error:(id *)a1;
- (id)createMetricsFromCachedValues:(id)a0 wer:(id)a1 similarityScores:(id)a2 profile:(id)a3 spIdType:(unsigned long long)a4;
- (void)evaluateProfileHealth:(id)a0 completionHandler:(id /* block */)a1;
- (void)evaluateProfileHealthPerUtterance:(id)a0 completionHandler:(id /* block */)a1;
- (void)evaluateQualityProblemsForMetrics:(id)a0 qualityProblems:(id)a1;
- (void)processMetricsReport:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveAssetForLocale:(id)a0 error:(id *)a1;

@end
