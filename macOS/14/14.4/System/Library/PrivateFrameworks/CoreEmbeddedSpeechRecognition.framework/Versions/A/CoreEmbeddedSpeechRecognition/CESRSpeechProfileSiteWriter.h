@class CESRSpeechProfileSite, CESRSpeechProfileSettings;

@interface CESRSpeechProfileSiteWriter : NSObject {
    CESRSpeechProfileSite *_speechProfileSite;
    CESRSpeechProfileSettings *_settings;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)rebuildWithAllSets:(id)a0 shouldDefer:(id /* block */)a1;
- (id)_calculateSets:(id)a0 applicableToGroup:(id)a1 withAllSets:(id)a2;
- (BOOL)_didRebuildProfileInstance:(id)a0 withAllSets:(id)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_didRebuildProfileInstances:(id)a0 withAllSets:(id)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_didRemoveProfileInstance:(id)a0;
- (BOOL)_didUpdateProfilesWithSets:(id)a0 allSets:(id)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_didVerifyProfileInstance:(id)a0 locale:(id)a1 options:(unsigned char)a2 allSets:(id)a3 shouldDefer:(id /* block */)a4;
- (BOOL)_didVerifyProfilesWithAllSets:(id)a0 shouldDefer:(id /* block */)a1;
- (id)_filterSets:(id)a0 supportedByInstance:(id)a1;
- (BOOL)_refreshRankedItemCaches:(id /* block */)a0;
- (BOOL)_shouldDeferUpdateForInstance:(id)a0 categoryGroup:(id)a1 sets:(id)a2;
- (id)_sortInstancesByLocale:(id)a0;
- (BOOL)_updateProfileInstance:(id)a0 categoryGroup:(id)a1 sets:(id)a2 shouldDefer:(id /* block */)a3;
- (BOOL)_verifyProfileInstance:(id)a0 withAllSets:(id)a1 shouldDefer:(id /* block */)a2;
- (id)initWithSpeechProfileSite:(id)a0 settings:(id)a1;
- (BOOL)performVerificationWithAllSets:(id)a0 shouldDefer:(id /* block */)a1;
- (BOOL)processUpdatesToSets:(id)a0 allSets:(id)a1 shouldDefer:(id /* block */)a2;

@end
