@class CESRSpeechProfileSite, NSArray, CESRSpeechProfileSettings, NSObject;
@protocol OS_dispatch_queue, CCSetEnumerator;

@interface CESRSpeechProfileSiteWriter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CESRSpeechProfileSite *_speechProfileSite;
    CESRSpeechProfileSettings *_settings;
    NSObject<CCSetEnumerator> *_setEnumerator;
    NSArray *_cachedSets;
    BOOL _didEnumerateSets;
}

- (id)description;
- (void).cxx_destruct;
- (id)_filterSetsForCategoryGroup:(id)a0 sets:(id)a1;
- (id)_filterSetsForProfileInstance:(id)a0 sets:(id)a1;
- (id)_filterSetsForSite:(id)a0;
- (BOOL)_fullRebuildForInvalidProfileInstance:(id)a0 locale:(id)a1 options:(unsigned char)a2 shouldDefer:(id /* block */)a3;
- (BOOL)_removeProfileInstance:(id)a0;
- (id)_requiredSetsForProfileInstance:(id)a0 categoryGroup:(id)a1;
- (BOOL)_shouldDeferRadioStationUpdate;
- (BOOL)_shouldDeferUpdateForProfileInstance:(id)a0 categoryGroup:(id)a1 sets:(id)a2;
- (id)_siteApplicableSets;
- (id)_sortInstancesByLocale:(id)a0;
- (BOOL)_updateProfileInstance:(id)a0 categoryGroup:(id)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_updateRequiredProfileInstancesWithSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_verifyAllProfileInstances:(BOOL)a0 shouldDefer:(id /* block */)a1;
- (BOOL)_verifyProfileInstance:(id)a0 shouldDefer:(id /* block */)a1;
- (void)addBookmarksForLocale:(id)a0 toChangeRegistry:(id)a1;
- (id)initWithSpeechProfileSite:(id)a0 settings:(id)a1 setEnumerator:(id)a2;
- (void)logRequiredProfileInstances;
- (BOOL)processUpdatesToSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)rebuildRequiredProfileInstances:(id /* block */)a0;
- (BOOL)verifyAllProfileInstances:(BOOL)a0 shouldDefer:(id /* block */)a1;

@end
