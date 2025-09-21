@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;

+ (id)sharedCache;

- (id)bundleCacheForBundleId:(id)a0;
- (void)dealloc;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)startAutomaticInvalidation;
- (id)init;
- (void)startObservingSystemLanguageChanges;
- (void)startObservingApplicationWorkspaceChanges;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)stopObservingSystemLanguageChanges;
- (void)invalidateCache;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)invalidateCacheForBundleId:(id)a0;
- (void)stopAutomaticInvalidation;
- (void).cxx_destruct;

@end
