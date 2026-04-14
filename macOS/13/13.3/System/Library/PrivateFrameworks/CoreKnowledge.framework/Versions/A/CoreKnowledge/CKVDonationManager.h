@class CKVIndexUpdaterFactory, CKVDonateRequestValidator, CKVDonateRequest, NSObject, CKVQueue;
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
@property (readonly, nonatomic) CKVDonateRequestValidator *requestValidator;

- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)submitRequest:(id)a0;
- (void)_beginTransaction;
- (void)_endTransaction;
- (void)_completeActiveRequest:(BOOL)a0;
- (void)_handleNextRequest;
- (BOOL)_isActiveRequestId:(unsigned int)a0;
- (void)completeRequest:(id)a0;
- (id)initWithDonationTimeout:(double)a0 indexManager:(id)a1 settings:(id)a2;

@end
