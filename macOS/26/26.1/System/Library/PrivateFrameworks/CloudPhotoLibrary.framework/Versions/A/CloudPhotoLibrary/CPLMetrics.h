@class NSURL, NSMutableDictionary;

@interface CPLMetrics : NSObject {
    NSURL *_metricsFileURL;
    NSMutableDictionary *_metrics;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void)_loadIfNecessary;
- (void)_save;
- (void).cxx_destruct;
- (id)initWithClientLibraryBaseURL:(id)a0;
- (id)initWithClientLibraryBaseURLForCPLEngine:(id)a0;
- (long long)countForKey:(id)a0;
- (void)resetMetrics;
- (void)incrementCountForKey:(id)a0;
- (void)forceLoad;
- (id)metricsDescription;

@end
