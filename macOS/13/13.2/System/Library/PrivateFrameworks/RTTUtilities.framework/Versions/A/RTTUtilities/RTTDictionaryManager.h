@class NSArray;

@interface RTTDictionaryManager : NSObject

@property (retain, nonatomic) NSArray *availableDictionaries;

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadIfNeeded;
- (void)deleteIfNeeded;
- (void)_downloadAsset:(id)a0;
- (void)activateTTYDictionary;
- (void)deactivateTTYDictionary;
- (id)_ttyDictionaryAsset;

@end
