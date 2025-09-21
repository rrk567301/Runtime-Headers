@class HMDHAPAccessoryTaskTracker, HMDHome, NSString;
@protocol HMDHAPAccessoryReaderWriterDataSource;

@interface HMDHAPAccessoryReaderWriter : NSObject <HMFLogging, HMDHAPAccessoryReader, HMDHAPAccessoryWriter>

@property (readonly) HMDHAPAccessoryTaskTracker *tracker;
@property (readonly, weak) HMDHome *home;
@property (readonly) id<HMDHAPAccessoryReaderWriterDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHome:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)_cannotForwardMessage:(id)a0;
- (id /* block */)_completionHandlerWithContext:(id)a0;
- (id)_defaultTaskForCurrentDeviceWithContext:(id)a0 requests:(id)a1;
- (BOOL)_isNotResidentDevice;
- (BOOL)_isPrimaryResidentDevice;
- (BOOL)_isSecondaryResidentDevice;
- (void)handleRemotelyUpdatedCharacteristicsMessage:(id)a0;
- (id)initWithHome:(id)a0 dataSource:(id)a1;
- (void)submitReadRequests:(id)a0 sourceType:(unsigned long long)a1 requestMessage:(id)a2;
- (void)submitWriteRequests:(id)a0 sourceType:(unsigned long long)a1 biomeSource:(unsigned long long)a2 requestMessage:(id)a3;
- (void)submitWriteRequests:(id)a0 sourceType:(unsigned long long)a1 requestMessage:(id)a2;
- (void)updateRequestExpiryForMessage:(id)a0;

@end
