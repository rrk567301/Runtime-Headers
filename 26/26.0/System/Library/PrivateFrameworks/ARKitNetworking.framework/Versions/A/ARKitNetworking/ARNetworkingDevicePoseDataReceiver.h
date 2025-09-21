@class ARNetworkingDataStream, NSString, ARNetworkingWeakObserverCollection;
@protocol ARNetworkingDevicePoseWorldOriginObserver;

@interface ARNetworkingDevicePoseDataReceiver : NSObject <ARNetworkingDataReceiverProtocol, ARNetworkingClientWorldOriginProviding> {
    struct { void /* unknown type, empty encoding */ columns[4]; } _originFromWorld;
}

@property (weak, nonatomic) id<ARNetworkingDevicePoseWorldOriginObserver> worldOriginDelegate;
@property (readonly, nonatomic) ARNetworkingWeakObserverCollection *observers;
@property (readonly, nonatomic) ARNetworkingDataStream *dataStream;
@property (readonly) BOOL connectOnDemand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
