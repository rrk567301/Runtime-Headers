@class WBSPerSitePreference, NSString, NSMutableDictionary, NSURL, NSObject, WBSCoalescedAsynchronousWriter;
@protocol WBSPerSitePreferenceManagerDelegate, OS_dispatch_queue;

@interface ZoomPreferenceManager : NSObject <WBSPerSitePreferenceManager> {
    NSMutableDictionary *_mapOfHostnamesToZoomPreferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCoalescedAsynchronousWriter *_zoomPreferencesWriter;
    long long _zoomPreferencesLoadingStatus;
    NSURL *_preferencesFileURL;
}

@property (readonly, nonatomic) WBSPerSitePreference *pageZoomPreference;
@property (readonly, nonatomic) double defaultPageZoomFactor;
@property (weak, nonatomic) id<WBSPerSitePreferenceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)largerZoomFactorForFactor:(id)a0;
+ (id)smallerZoomFactorForFactor:(id)a0;
+ (id)zoomFactorForUntrustedZoomFactor:(id)a0;
+ (id)pageZoomFactors;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)preferences;
- (id)_dictionaryRepresentation;
- (void)getValueOfPreference:(id)a0 forDomain:(id)a1 withTimeout:(id)a2 usingBlock:(id /* block */)a3;
- (void)setValue:(id)a0 ofPreference:(id)a1 forDomain:(id)a2 completionHandler:(id /* block */)a3;
- (void)getDefaultPreferenceValueForPreference:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDefaultValue:(id)a0 ofPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)getAllDomainsConfiguredForPreference:(id)a0 usingBlock:(id /* block */)a1;
- (id)valuesForPreference:(id)a0;
- (id)localizedStringForValue:(id)a0 inPreference:(id)a1;
- (void)savePendingChangesBeforeTermination;
- (void)removePreferenceValuesForDomains:(id)a0 fromPreference:(id)a1 completionHandler:(id /* block */)a2;
- (void)_historyWasCleared:(id)a0;
- (void)performDelayedLaunchOperations;
- (id)zoomPreferenceForURL:(id)a0;
- (void)setZoomPreference:(id)a0 forURL:(id)a1;
- (void)_didRemoveHostnames:(id)a0;
- (void)_performDelayedLaunchOperationsWithPreferenceFileURL:(id)a0;
- (id)_mapOfHostnamesToZoomPreferencesFromFileURL:(id)a0;
- (void)_performDelayedLaunchOperationsIfNecessary;
- (void)_zoomPreferenceStateDidChange;
- (void)_setZoomPreference:(id)a0 forURL:(id)a1 defaultPageZoomFactor:(double)a2 completionHandler:(id /* block */)a3;
- (void)setDefaultPageZoomFactor:(double)a0;

@end
