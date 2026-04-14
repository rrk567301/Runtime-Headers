@class ELSSnapshot, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface ELSManager : NSObject

@property (retain, nonatomic) ELSSnapshot *snapshot;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;

+ (id)sharedManager;

- (void)refreshWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)finish;
- (void)flush;
- (id)initSingleton;
- (void)finishWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)flushWithCompletion:(id /* block */)a0;
- (void)beginUpdates;
- (BOOL)object:(id)a0 isEqualToObject:(id)a1;
- (void)transactionWithBlock:(id /* block */)a0;
- (BOOL)commitSessionDeviceTransaction:(id)a0;
- (BOOL)array:(id)a0 isEqualToArray:(id)a1;
- (void)commitBatchTransaction:(id)a0;
- (BOOL)commitConsentDataTransaction:(id)a0;
- (BOOL)commitConsentHandlesTransaction:(id)a0;
- (BOOL)commitConsentTransaction:(id)a0;
- (BOOL)commitDatesTransaction:(id)a0;
- (BOOL)commitDeviceSelectionMap:(id)a0;
- (BOOL)commitFollowUpOptions:(id)a0;
- (BOOL)commitIdentifiersToRetryTransaction:(id)a0;
- (BOOL)commitMetadataTransaction:(id)a0;
- (BOOL)commitQueueTransaction:(id)a0;
- (BOOL)commitRetriesRemainingTransaction:(id)a0;
- (BOOL)commitSessionIDTransaction:(id)a0;
- (BOOL)commitStatusTransaction:(id)a0;
- (BOOL)commitTopLevelPrivacyPolicy:(id)a0;
- (BOOL)commitUploadCompletedPercentage:(id)a0;
- (void)finishWithFailure;
- (void)finishWithFailureBlock:(id /* block */)a0;
- (void)getBugSessionActivityWithCompletion:(id /* block */)a0;
- (BOOL)privacyPolicy:(id)a0 isEqualToPolicy:(id)a1;
- (void)transactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
