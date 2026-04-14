@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;

+ (id)sharedCache;

- (void)startObservingApplicationWorkspaceChanges;
- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)stopAutomaticInvalidation;
- (void)invalidateCache;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (void)startAutomaticInvalidation;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)startObservingSystemLanguageChanges;
- (void)stopObservingSystemLanguageChanges;
- (void)invalidateCacheForBundleId:(id)a0;
- (id)init;
- (id)bundleCacheForBundleId:(id)a0;
- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)dealloc;

@end
