@class NSURLSession, NSDictionary, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject {
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}

+ (void)disableConfigurationFetching;

- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)valueForKey:(id)a0;
- (void)_setContents:(id)a0;
- (void)_load;
- (void)_save;
- (void)check;
- (double)_updateInterval;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (void)refetchFromDisk;

@end
