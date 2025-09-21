@class NSArray, NSString, NSHashTable, NSDictionary, NSError;
@protocol MRExternalDeviceTransportConnectionDataSource;

@interface MRExternalDeviceTransportConnection : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSArray *allObservers;
@property (weak, nonatomic) id<MRExternalDeviceTransportConnectionDataSource> dataSource;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *destinationOutputDeviceUID;
@property (retain, nonatomic) NSString *destinationGroupUID;
@property (nonatomic) unsigned int connectOptions;
@property (retain, nonatomic) NSDictionary *connectUserInfo;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long transportType;

- (id)initWithDataSource:(id)a0;
- (void)closeWithError:(id)a0;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)exportEndpoint:(id)a0;
- (void)_notifyDelegateDidCloseWithError:(id)a0;
- (void)_notifyDelegateDidReceiveData:(id)a0;
- (void)_notifyDelegateHasSpaceAvailable;
- (id)exportEndpoints:(id)a0;
- (id)exportOutputDevice:(id)a0 endpoint:(id)a1;
- (id)exportOutputDevices:(id)a0 endpoint:(id)a1;
- (BOOL)hasAccessToPlayerPath:(id)a0;
- (BOOL)isAllowedToSendCommand:(unsigned int)a0;
- (BOOL)isAllowedToSendMessageType:(unsigned long long)a0;
- (unsigned long long)sendTransportData:(id)a0 options:(id)a1;

@end
