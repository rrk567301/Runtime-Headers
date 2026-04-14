@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;

+ (id)sharedCache;

- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)invalidateCacheForBundleId:(id)a0;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)stopObservingSystemLanguageChanges;
- (void)stopAutomaticInvalidation;
- (void)startAutomaticInvalidation;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;
- (id)bundleCacheForBundleId:(id)a0;
- (void)startObservingSystemLanguageChanges;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)dealloc;
- (void)startObservingApplicationWorkspaceChanges;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)invalidateCache;
- (void).cxx_destruct;
- (id)init;

@end
