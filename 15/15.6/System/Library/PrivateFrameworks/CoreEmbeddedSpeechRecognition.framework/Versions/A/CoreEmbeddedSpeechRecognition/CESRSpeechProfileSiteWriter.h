@class CESRSpeechProfileSite, CESRSpeechProfileSettings;

@interface CESRSpeechProfileSiteWriter : NSObject {
    CESRSpeechProfileSite *_speechProfileSite;
    CESRSpeechProfileSettings *_settings;
}

- (id)description;
- (void).cxx_destruct;
- (char)rebuildWithAllSets:(id)a0 shouldDefer:(id /* block */)a1;
- (id)_calculateSets:(id)a0 applicableToGroup:(id)a1 withAllSets:(id)a2;
- (id)_filterSets:(id)a0 supportedByInstance:(id)a1;
- (char)_refreshRankedItemCaches:(id /* block */)a0;
- (char)_removeProfileInstance:(id)a0;
- (char)_shouldDeferRadioStationUpdate;
- (char)_shouldDeferUpdateForInstance:(id)a0 categoryGroup:(id)a1 sets:(id)a2;
- (id)_sortInstancesByLocale:(id)a0;
- (char)_updateProfileInstance:(id)a0 categoryGroup:(id)a1 sets:(id)a2 shouldDefer:(id /* block */)a3;
- (char)_updateProfilesWithSets:(id)a0 allSets:(id)a1 shouldDefer:(id /* block */)a2;
- (char)_verifyProfileInstance:(id)a0 locale:(id)a1 options:(unsigned char)a2 allSets:(id)a3 shouldDefer:(id /* block */)a4;
- (char)_verifyProfileInstance:(id)a0 withAllSets:(id)a1 shouldDefer:(id /* block */)a2;
- (char)_verifyProfilesWithAllSets:(id)a0 shouldDefer:(id /* block */)a1;
- (id)initWithSpeechProfileSite:(id)a0 settings:(id)a1;
- (void)logCurrentStateWithAllSets:(id)a0;
- (char)performVerificationWithAllSets:(id)a0 shouldDefer:(id /* block */)a1;
- (char)processUpdatesToSets:(id)a0 allSets:(id)a1 shouldDefer:(id /* block */)a2;

@end
