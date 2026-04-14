@class NSArray, NEConfigurationManager, NSMutableDictionary, NSString, NSObject, NEVPNManager;
@protocol OS_dispatch_queue;

@interface NPTVPNCollector : NSObject <NPTMetadataCollection>

@property (retain, nonatomic) NEVPNManager *manager;
@property (retain, nonatomic) NEConfigurationManager *configManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSArray *eventsToMonitor;
@property (copy, nonatomic) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)collectorName;

- (void).cxx_destruct;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (void)stopCollecting;
- (id)getVPNStatusAsString:(long long)a0;
- (void)vpnNotificationReceived:(id)a0;

@end
