@class NSMutableDictionary, FCKeyValueStore;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject {
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id<FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (void)setContentScaleForTagID:(id)a0 contentScale:(id)a1;
- (void)loadLocalCachesFromStore;
- (id)accessTokenForTagID:(id)a0;
- (id)authenticatedAccessTokensByTagID;
- (id)fontSizeForTagID:(id)a0;
- (id)contentScaleForTagID:(id)a0;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)a0;
- (void)setWebAccessOptInForTagID:(id)a0 webAccessOptIn:(BOOL)a1;
- (void)handleSyncWithTagSettingsRecord:(id)a0;
- (void)syncForTagID:(id)a0;
- (void)setFontSizeForTagID:(id)a0 fontSize:(id)a1;
- (id)allTagSettingsRecordNames;
- (id)webAccessOptedInTagIDs;
- (id)allTagSettingsRecords;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0 tagSettingsDelegate:(id)a1;
- (void)setAccessTokenForTagID:(id)a0 accessToken:(id)a1 userInitiated:(BOOL)a2;

@end
