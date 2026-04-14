@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;

+ (id)sharedCache;

- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (id)bundleCacheForBundleId:(id)a0;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)startObservingApplicationWorkspaceChanges;
- (id)init;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)invalidateCache;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)startAutomaticInvalidation;
- (void).cxx_destruct;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (void)dealloc;
- (void)stopAutomaticInvalidation;
- (void)invalidateCacheForBundleId:(id)a0;
- (void)startObservingSystemLanguageChanges;
- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)stopObservingSystemLanguageChanges;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;

@end
