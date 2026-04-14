@class NSMutableDictionary, FCKeyValueStore;
@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject {
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id<FCTagSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (void)setWebAccessOptInForTagID:(id)a0 webAccessOptIn:(BOOL)a1;
- (void)setAccessTokenForTagID:(id)a0 accessToken:(id)a1 userInitiated:(BOOL)a2;
- (id)allTagSettingsRecords;
- (void)syncForTagID:(id)a0;
- (id)allTagSettingsRecordNames;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)a0;
- (void).cxx_destruct;
- (void)handleSyncWithTagSettingsRecord:(id)a0;
- (void)setFontSizeForTagID:(id)a0 fontSize:(id)a1;
- (id)contentScaleForTagID:(id)a0;
- (id)initWithStore:(id)a0 tagSettingsDelegate:(id)a1;
- (id)authenticatedAccessTokensByTagID;
- (id)fontSizeForTagID:(id)a0;
- (void)setContentScaleForTagID:(id)a0 contentScale:(id)a1;
- (void)loadLocalCachesFromStore;
- (id)webAccessOptedInTagIDs;
- (id)accessTokenForTagID:(id)a0;

@end
