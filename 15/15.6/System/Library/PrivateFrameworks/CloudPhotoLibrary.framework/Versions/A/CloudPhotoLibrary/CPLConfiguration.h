@class CPLConfigurationFetcher, NSString, NSURL, NSDate, NSObject, CPLConfigurationDictionary;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject <CPLSyncSessionConfiguration, CPLConfigurationFetcherDelegate> {
    CPLConfigurationDictionary *_configurationDictionary;
    NSURL *_configurationFileURL;
    double _updateInterval;
    CPLConfigurationFetcher *_configurationFetcher;
    NSObject<OS_dispatch_queue> *_lock;
    char _disableConfigurationFetching;
    char _dedupeConfigurationDictionary;
}

@property char allowsLocalConflictResolutionWhenOverQuota;
@property (readonly) long long maximumComputeStatesToUploadPerBatch;
@property char isComputeStateTaskUploadEnabled;
@property (readonly, nonatomic) char shouldDisableEPP;
@property (readonly, nonatomic) char shouldCheckEPPCapability;
@property (readonly) char allowsLocalConflictResolution;
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

- (void).cxx_destruct;
- (void)invalidate;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)valueForKey:(id)a0;
- (void)_load;
- (void)_save;
- (void)check;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (id)initWithClientLibraryBaseURL:(id)a0 minUpdateInterval:(double)a1 updateIntervalKey:(id)a2;
- (void)refetchFromDisk;
- (void)_updateConfigurationDictionary:(id)a0;
- (void)configurationFetcher:(id)a0 didUpdateConfigurationDictionary:(id)a1 configurationHasChanged:(char)a2;
- (void)disableConfigurationFetching;
- (id)initWithClientLibraryBaseURL:(id)a0 configurationURL:(id)a1 minUpdateInterval:(double)a2 updateIntervalKey:(id)a3;
- (void)updateConfigurationDictionary:(id)a0;

@end
