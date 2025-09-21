@class ELSSnapshot, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface ELSManager : NSObject

@property (retain, nonatomic) ELSSnapshot *snapshot;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)finish;
- (void)beginUpdates;
- (void)flush;
- (void)flushWithCompletion:(id /* block */)a0;
- (id)initSingleton;
- (void)finishWithCompletion:(id /* block */)a0;
- (void)finishWithFailure;
- (char)object:(id)a0 isEqualToObject:(id)a1;
- (void)transactionWithBlock:(id /* block */)a0;
- (void)refreshWithCompletion:(id /* block */)a0;
- (char)commitSessionDeviceTransaction:(id)a0;
- (char)array:(id)a0 isEqualToArray:(id)a1;
- (void)commitBatchTransaction:(id)a0;
- (char)commitConsentDataTransaction:(id)a0;
- (char)commitConsentHandlesTransaction:(id)a0;
- (char)commitConsentTransaction:(id)a0;
- (char)commitDatesTransaction:(id)a0;
- (char)commitFollowUpOptions:(id)a0;
- (char)commitIdentifiersToRetryTransaction:(id)a0;
- (char)commitMetadataTransaction:(id)a0;
- (char)commitQueueTransaction:(id)a0;
- (char)commitRetriesRemainingTransaction:(id)a0;
- (char)commitStatusTransaction:(id)a0;
- (char)commitTopLevelPrivacyPolicy:(id)a0;
- (char)commitUploadCompletedPercentage:(id)a0;
- (void)finishWithFailureBlock:(id /* block */)a0;
- (void)getBugSessionActivityWithCompletion:(id /* block */)a0;
- (char)privacyPolicy:(id)a0 isEqualToPolicy:(id)a1;
- (void)transactionWithBlock:(id /* block */)a0 completion:(id /* block */)a1;

@end
