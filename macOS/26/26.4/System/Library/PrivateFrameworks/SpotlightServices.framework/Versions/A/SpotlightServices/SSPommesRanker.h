@interface SSPommesRanker : NSObject

@property (nonatomic) BOOL isSearchToolClient;

+ (id)sharedPommesRanker;
+ (long long)CalendarL1Compare:(id)a0 to:(id)a1 queryTime:(double)a2;
+ (long long)MailL1Compare:(id)a0 to:(id)a1;
+ (long long)BaseL1Compare:(id)a0 to:(id)a1;
+ (long long)BaseL2Compare:(id)a0 to:(id)a1;
+ (long long)MailL2Compare:(id)a0 to:(id)a1;
+ (long long)SettingsL2Compare:(id)a0 to:(id)a1;

- (void)sortAndFilterRankedItems:(id)a0 maxCount:(long long)a1 bundleID:(id)a2 userQuery:(id)a3 queryID:(long long)a4 privateQuery:(BOOL)a5 currentTime:(double)a6;
- (void)updateScoresForItems:(id)a0 withSectionBundle:(id)a1 userQuery:(id)a2 queryID:(long long)a3 mailQueryID:(long long)a4 mailSessionID:(id)a5 currentTime:(double)a6 collectL2Signals:(BOOL)a7 keyboardLanguage:(id)a8 onlyEmbeddingResults:(BOOL)a9 isCardSearch:(BOOL)a10 isDocumentSearch:(BOOL)a11 maxCount:(long long)a12;

@end
