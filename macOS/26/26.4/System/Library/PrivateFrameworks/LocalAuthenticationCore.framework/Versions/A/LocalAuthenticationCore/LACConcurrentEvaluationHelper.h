@class LACFlags, _TtC23LocalAuthenticationCore32LACConcurrentEvaluationAllowList, LACSDKHelper;

@interface LACConcurrentEvaluationHelper : NSObject

@property (class, nonatomic, readonly) LACConcurrentEvaluationHelper *sharedInstance;

@property (nonatomic, retain) _TtC23LocalAuthenticationCore32LACConcurrentEvaluationAllowList *allowList;
@property (nonatomic, retain) LACFlags *flags;
@property (nonatomic, retain) LACSDKHelper *sdkHelper;
@property (nonatomic, readonly) BOOL isConcurrentEvaluationAvailable;
@property (nonatomic, readonly) BOOL isConcurrentEvaluationEnabled;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isClientAllowListedWithClientInfo:(id)a0;
- (BOOL)isConcurrentEvaluationEnabledForClientInfo:(id)a0;

@end
