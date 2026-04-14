@class MTRDeviceController, NSArray, MTRWeakReference, NSMutableDictionary, NSObject, MTRAsyncCallbackWorkQueue;
@protocol OS_dispatch_queue;

@interface MTRDevice : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MTRWeakReference *weakDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSArray *unreportedEvents;
@property (nonatomic) BOOL subscriptionActive;
@property (retain, nonatomic) NSMutableDictionary *readCache;
@property (retain, nonatomic) NSMutableDictionary *expectedValueCache;
@property (nonatomic) BOOL expirationCheckScheduled;
@property (retain, nonatomic) MTRAsyncCallbackWorkQueue *asyncCallbackWorkQueue;
@property (readonly, nonatomic) MTRDeviceController *deviceController;
@property (readonly, nonatomic) unsigned long long nodeID;
@property (readonly, nonatomic) unsigned long long state;

+ (id)deviceWithNodeID:(unsigned long long)a0 deviceController:(id)a1;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)setupSubscription;
- (void)openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)initWithNodeID:(unsigned long long)a0 deviceController:(id)a1;
- (void)_handleSubscriptionEstablished;
- (void)_handleSubscriptionError:(id)a0;
- (void)_handleResubscriptionNeeded;
- (void)_handleSubscriptionReset;
- (void)_reportAttributes:(id)a0;
- (void)_handleAttributeReport:(id)a0;
- (void)_handleEventReport:(id)a0;
- (id)readAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3;
- (void)writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 expectedValueInterval:(id)a4 timedWriteTimeout:(id)a5;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 clientQueue:(id)a7 completion:(id /* block */)a8;
- (void)_checkExpiredExpectedValues;
- (void)_performScheduledExpirationCheck;
- (id)_attributeValueDictionaryForAttributePath:(id)a0;
- (BOOL)_attributeDataValue:(id)a0 isEqualToDataValue:(id)a1;
- (id)_getAttributesToReportWithReportedValues:(id)a0;
- (id)_getAttributesToReportWithNewExpectedValues:(id)a0 expirationTime:(id)a1;
- (void)setExpectedValues:(id)a0 expectedValueInterval:(id)a1;

@end
