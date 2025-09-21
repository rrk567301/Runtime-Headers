@class ARNetworkingDataStream, NSString, ARNetworkingWeakObserverCollection;

@interface ARNetworkingGazeDataReceiver : NSObject <ARNetworkingDataReceiverProtocol>

@property (readonly, nonatomic) ARNetworkingWeakObserverCollection *observers;
@property (readonly, nonatomic) ARNetworkingDataStream *dataStream;
@property (readonly) BOOL connectOnDemand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveRawData:(void *)a0 withSize:(unsigned long long)a1;

@end
