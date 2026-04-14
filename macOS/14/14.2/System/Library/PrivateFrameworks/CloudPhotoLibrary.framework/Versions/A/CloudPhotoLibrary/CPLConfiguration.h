@class NSURLSession, NSString, NSDictionary, NSURL, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface CPLConfiguration : NSObject {
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    double _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
    double _minUpdateInterval;
    NSString *_updateIntervalKey;
}

+ (void)disableConfigurationFetching;

- (void).cxx_destruct;
- (void)invalidate;
- (id)objectForKeyedSubscript:(id)a0;
- (id)valueForKey:(id)a0;
- (void)_setContents:(id)a0;
- (void)_load;
- (void)_save;
- (void)check;
- (double)_updateInterval;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (id)initWithClientLibraryBaseURL:(id)a0 minUpdateInterval:(double)a1 updateIntervalKey:(id)a2;
- (void)refetchFromDisk;

@end
