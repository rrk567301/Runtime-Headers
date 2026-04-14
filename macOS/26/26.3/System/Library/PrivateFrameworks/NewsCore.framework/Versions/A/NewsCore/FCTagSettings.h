@class NSMutableDictionary, FCKeyValueStore;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject {
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id<FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (id)initWithStore:(id)a0 tagSettingsDelegate:(id)a1;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)a0;
- (id)allTagSettingsRecordNames;
- (void)syncForTagID:(id)a0;
- (id)accessTokenForTagID:(id)a0;
- (void)loadLocalCachesFromStore;
- (void)setFontSizeForTagID:(id)a0 fontSize:(id)a1;
- (void).cxx_destruct;
- (id)contentScaleForTagID:(id)a0;
- (id)authenticatedAccessTokensByTagID;
- (void)handleSyncWithTagSettingsRecord:(id)a0;
- (void)setContentScaleForTagID:(id)a0 contentScale:(id)a1;
- (id)allTagSettingsRecords;
- (void)setWebAccessOptInForTagID:(id)a0 webAccessOptIn:(BOOL)a1;
- (id)webAccessOptedInTagIDs;
- (void)setAccessTokenForTagID:(id)a0 accessToken:(id)a1 userInitiated:(BOOL)a2;
- (id)fontSizeForTagID:(id)a0;

@end
