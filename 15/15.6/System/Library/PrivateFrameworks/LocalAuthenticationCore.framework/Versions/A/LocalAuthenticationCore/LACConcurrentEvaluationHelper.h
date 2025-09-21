@class LACFlags, _TtC23LocalAuthenticationCore32LACConcurrentEvaluationAllowList;

@interface LACConcurrentEvaluationHelper : NSObject

@property (class, readonly, nonatomic) LACConcurrentEvaluationHelper *sharedInstance;

@property (nonatomic, readonly) char isConcurrentEvaluationAvailable;
@property (nonatomic, readonly) char isConcurrentEvaluationEnabled;
@property (readonly, nonatomic) _TtC23LocalAuthenticationCore32LACConcurrentEvaluationAllowList *allowList;
@property (readonly, nonatomic) LACFlags *flags;

- (void).cxx_destruct;
- (char)isConcurrentEvaluationEnabledForClientInfo:(id)a0;
- (id)initWithAllowList:(id)a0 flags:(id)a1;
- (char)isClientAllowListedWithClientInfo:(id)a0;

@end
