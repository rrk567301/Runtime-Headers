@class CPLConfigurationFetcher, NSString, NSURL, NSDate, NSObject, CPLConfigurationDictionary;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject <CPLSyncSessionConfiguration, CPLConfigurationFetcherDelegate> {
    CPLConfigurationDictionary *_configurationDictionary;
    NSURL *_configurationFileURL;
    double _updateInterval;
    CPLConfigurationFetcher *_configurationFetcher;
    NSObject<OS_dispatch_queue> *_lock;
    BOOL _disableConfigurationFetching;
    BOOL _dedupeConfigurationDictionary;
}

@property BOOL allowsLocalConflictResolutionWhenOverQuota;
@property (readonly) long long maximumComputeStatesToUploadPerBatch;
@property BOOL isComputeStateTaskUploadEnabled;
@property (readonly, nonatomic) BOOL shouldDisableEPP;
@property (readonly, nonatomic) BOOL shouldCheckEPPCapability;
@property (readonly) BOOL allowsLocalConflictResolution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) CPLConfigurationDictionary *configurationDictionary;
@property (copy, nonatomic) id /* block */ configurationDictionaryUniquifier;
@property (readonly, nonatomic) NSURL *clientLibraryBaseURL;
@property (readonly, nonatomic) NSURL *configurationURL;
@property (readonly, nonatomic) double minUpdateInterval;
@property (readonly, nonatomic) NSString *updateIntervalKey;
@property (readonly, nonatomic) NSDate *lastUpdateDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_save;
- (void)invalidate;
- (void)_load;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithClientLibraryBaseURL:(id)a0 minUpdateInterval:(double)a1 updateIntervalKey:(id)a2;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (void)refetchFromDisk;
- (void)updateConfigurationDictionary:(id)a0;
- (void)check;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)initWithClientLibraryBaseURL:(id)a0 configurationURL:(id)a1 minUpdateInterval:(double)a2 updateIntervalKey:(id)a3;
- (void)_updateConfigurationDictionary:(id)a0;
- (void)disableConfigurationFetching;
- (void)configurationFetcher:(id)a0 didUpdateConfigurationDictionary:(id)a1 configurationHasChanged:(BOOL)a2;

@end
