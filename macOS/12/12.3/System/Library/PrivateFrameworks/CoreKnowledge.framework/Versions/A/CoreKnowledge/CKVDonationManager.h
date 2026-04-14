@class CKVIndexUpdaterFactory, CKVDonateRequest, CKVQueue, NSObject;
@protocol OS_os_transaction, OS_dispatch_queue;

@interface CKVDonationManager : NSObject <CKVDonateRequestDelegate> {
    unsigned int _eventIdCounter;
    unsigned int _transactionCounter;
    NSObject<OS_os_transaction> *_transaction;
    double _donationTimeout;
    NSObject<OS_dispatch_queue> *_registryQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    CKVQueue *_requestQueue;
    CKVDonateRequest *_activeRequest;
    BOOL _suspended;
}

@property (readonly, nonatomic) CKVIndexUpdaterFactory *updaterFactory;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)submitRequest:(id)a0;
- (void)_beginTransaction;
- (id)initWithDonationTimeout:(double)a0 indexManager:(id)a1 settings:(id)a2;
- (void)_endTransaction;
- (void)_handleNextRequest;
- (void)completeRequest:(id)a0;

@end
