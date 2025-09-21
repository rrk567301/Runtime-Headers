@class RCConfigurationSettings, RCKeyValueStore, NSURL, RCAsyncSerialQueue, NSMutableDictionary, NSMutableArray, RCDeviceInfo, RCUnfairLock;

@interface RCConfigurationManager : NSObject

@property (retain, nonatomic) RCConfigurationSettings *configurationSettings;
@property (retain, nonatomic) RCDeviceInfo *deviceInfo;
@property (retain, nonatomic) NSURL *contentDirectoryURL;
@property (retain, nonatomic) RCAsyncSerialQueue *configRequestSerialQueue;
@property (retain, nonatomic) RCKeyValueStore *localStore;
@property (retain, nonatomic) NSMutableDictionary *configResourceByRequestKey;
@property (retain, nonatomic) NSMutableArray *runningOperations;
@property (retain, nonatomic) RCUnfairLock *runningOperationsLock;
@property (retain, nonatomic) NSMutableDictionary *backgroundURLSessionHandlers;
@property (retain, nonatomic) RCUnfairLock *backgroundURLSessionHandlersLock;
@property (copy, nonatomic) id /* block */ networkEventHandler;

- (id)_encodeConfigurationResource:(id)a0;
- (BOOL)_areAllConfigurationResourcesAvailable:(id)a0 requestKeys:(id)a1;
- (void)_saveConfigurationResource:(id)a0;
- (void)_loadConfigurationResourcesFromStore;
- (void)cancelAllTasksOnBackgroundSessionWithSettings:(id)a0 completion:(id /* block */)a1;
- (void)_fetchConfigurationFromFallbackURLWithSettings:(id)a0 completion:(id /* block */)a1;
- (BOOL)_areAllConfigurationResourcesInvalid:(id)a0 configurationSettings:(id)a1 allowedToReachEndpoint:(BOOL)a2 requestKeys:(id)a3;
- (id)_decodeConfigurationResource:(id)a0;
- (void)reestablishBackgroundSessionWithSettings:(id)a0 sessionCompletionHandler:(id /* block */)a1;
- (void)_processConfigurationCompletionWithResources:(id)a0 configurationSettings:(id)a1 processedConfigurationDataByRequestKey:(id *)a2 processedTreatmentIDs:(id *)a3 processedSegmentSetIDs:(id *)a4 error:(id *)a5;
- (void)_removeConfigurationResourceForRequestKey:(id)a0;
- (BOOL)_isUnexpiredConfigurationResource:(id)a0 allowedToReachEndpoint:(BOOL)a1 useBackgroundRefreshRate:(BOOL)a2;
- (id)initWithContentDirectoryURL:(id)a0;
- (void)fetchMultiConfigurationWithSettings:(id)a0 networkActivityBlock:(id /* block */)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isValidConfigurationResource:(id)a0 configurationSettings:(id)a1 allowedToReachEndpoint:(BOOL)a2 cachePolicy:(id)a3;
- (void)_fetchMultiConfigurationFromEndpointURL:(id)a0 settings:(id)a1 networkActivityBlock:(id /* block */)a2 changeTagsByRequestKey:(id)a3 completion:(id /* block */)a4;
- (id)_endpointURLForEnvironment:(unsigned long long)a0 requestKey:(id)a1;
- (void)fetchSingleConfigurationWithSettings:(id)a0 networkActivityBlock:(id /* block */)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isAllowedToReachEndpointWithSettings:(id)a0 configurationResource:(id)a1 endpointURL:(id)a2;
- (void)fetchConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (BOOL)_areAllConfigurationResourcesExpired:(id)a0 allowedToReachEndpoint:(BOOL)a1 configurationSettings:(id)a2 requestKeys:(id)a3;
- (void)fetchSingleConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (id)_endpointURLForEndpointConfig:(id)a0 overrideEnvironment:(unsigned long long)a1 overrideEnabled:(BOOL)a2;
- (void).cxx_destruct;
- (void)fetchMultiConfigurationWithSettings:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;

@end
