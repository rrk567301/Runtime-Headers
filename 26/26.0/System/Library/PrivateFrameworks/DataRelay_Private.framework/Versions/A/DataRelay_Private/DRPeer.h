@class NSNumber, NSString, RPCompanionLinkClient, NSObject, NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface DRPeer : NSObject

@property (retain, nonatomic) RPCompanionLinkClient *deviceFoundClient;
@property (retain, nonatomic) RPCompanionLinkClient *deviceLostClient;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *discoveryTimer;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSDate *discoveryStartTimestamp;
@property (copy, nonatomic) id /* block */ internalDisconnectHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSNumber *dataRelayVersion;
@property (retain, nonatomic) RPCompanionLinkClient *rapportClient;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long requestedDataTypes;
@property (nonatomic) unsigned long long availableDataTypes;
@property BOOL hrmStarted;
@property BOOL dm6Started;
@property BOOL isActivated;
@property (copy, nonatomic) id /* block */ disconnectHandler;

- (void)reset;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (void)activate:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_activate:(id /* block */)a0;
- (void)addAvailableDataTypes:(unsigned long long)a0;
- (void)addRequestedDataTypes:(unsigned long long)a0;
- (void)deviceFound:(id)a0 completion:(id /* block */)a1;
- (void)deviceLost;
- (void)removeAvailableDataTypes:(unsigned long long)a0;
- (void)removeRequestedDataTypes:(unsigned long long)a0;
- (BOOL)shouldDeactivate;

@end
