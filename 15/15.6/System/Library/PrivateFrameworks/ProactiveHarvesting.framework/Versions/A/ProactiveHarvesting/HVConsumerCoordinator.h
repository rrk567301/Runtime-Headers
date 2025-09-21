@class NSString, HVQueues, NSObject, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface HVConsumerCoordinator : NSObject <HVQueueObserver> {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_serialQueue;
    HVQueues *_queues;
    NSString *_path;
    NSObject<OS_dispatch_group> *_waitingForLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultCoordinator;

- (id)init;
- (void).cxx_destruct;
- (char)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (char)registerInteractionConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerMailConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerMessagesConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerNotesConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerRemindersConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerNewsConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerSafariConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerThirdPartyAppConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerUserActivityConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (id)statsWithError:(id *)a0;
- (void)enableConsumptionOfDataSources:(unsigned int)a0;
- (void)contentAvailableFromSources:(unsigned int)a0;
- (void)disableConsumptionOfDataSources:(unsigned int)a0;
- (char)harvestContentWithMinimumLevelOfService:(unsigned char)a0 ignoringDiscretionaryPowerBudget:(char)a1 error:(id *)a2 shouldContinueBlock:(id /* block */)a3;
- (id)initWithQueues:(id)a0 path:(id)a1;
- (char)registerNotificationsConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerParsecConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerPhotosConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (char)registerSiriConsumer:(id)a0 levelOfService:(unsigned char)a1;
- (void)restoreConsumptionOfDataSources:(unsigned int)a0;

@end
