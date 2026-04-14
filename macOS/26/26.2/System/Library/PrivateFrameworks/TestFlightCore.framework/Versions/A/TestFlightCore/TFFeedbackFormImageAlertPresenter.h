@class NSMutableArray;

@interface TFFeedbackFormImageAlertPresenter : NSObject

@property (copy) NSMutableArray *pendingAlertPaths;

- (void).cxx_destruct;
- (id)init;
- (void)addErrorForPath:(id)a0;
- (long long)presentBatchedErrorsIfAny;

@end
