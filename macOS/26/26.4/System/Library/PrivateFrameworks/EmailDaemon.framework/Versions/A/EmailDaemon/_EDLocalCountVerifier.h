@class EFStoppableScheduler, EDMessagePersistence, NSDate;
@protocol EFAssertableScheduler, _EDLocalCountVerifierDelegate;

@interface _EDLocalCountVerifier : NSObject {
    BOOL _hasFailedVerification;
    EFStoppableScheduler<EFAssertableScheduler> *_scheduler;
    EDMessagePersistence *_messagePersistence;
    id<_EDLocalCountVerifierDelegate> _delegate;
    NSDate *_lastVerifiedToBeInSync;
}

- (void).cxx_destruct;
- (BOOL)_shouldVerifyLocalCount;
- (void)_verifyLocalCountWithCountAndGeneration:(id)a0;

@end
