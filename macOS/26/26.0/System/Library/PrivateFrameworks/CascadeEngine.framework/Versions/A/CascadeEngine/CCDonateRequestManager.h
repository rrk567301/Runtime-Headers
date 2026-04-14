@class CCDataResourceWriteAccess, CCDifferentialUpdaterFactory, CCDonateRequest, NSObject, CCDonateRequestQueueNode;
@protocol OS_os_transaction, OS_dispatch_queue, CCSetChangeNotifierProtocol;

@interface CCDonateRequestManager : NSObject {
    unsigned int _eventIdCounter;
    unsigned int _transactionCounter;
    NSObject<OS_os_transaction> *_transaction;
    double _donationTimeout;
    NSObject<OS_dispatch_queue> *_registryQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
    CCDonateRequestQueueNode *_firstNode;
    CCDonateRequestQueueNode *_lastNode;
    CCDonateRequest *_activeRequest;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    CCDataResourceWriteAccess *_writeAccess;
    BOOL _suspended;
}

@property (readonly, nonatomic) CCDifferentialUpdaterFactory *updaterFactory;

- (void)suspend;
- (void)_enqueue:(id)a0;
- (void)resume;
- (id)init;
- (void).cxx_destruct;
- (void)submitRequest:(id)a0;
- (void)_beginTransaction;
- (void)_endTransaction;
- (id)_dequeue;
- (void)_handleNextRequest;
- (BOOL)_isActiveRequestId:(unsigned int)a0;
- (void)completeRequest:(id)a0;
- (id)initWithWriteAccess:(id)a0;
- (id)initWithWriteAccess:(id)a0 changeNotifier:(id)a1 donationTimeout:(double)a2;
- (id)requestAccessToResource:(id)a0 withMode:(unsigned long long)a1 error:(id *)a2;

@end
