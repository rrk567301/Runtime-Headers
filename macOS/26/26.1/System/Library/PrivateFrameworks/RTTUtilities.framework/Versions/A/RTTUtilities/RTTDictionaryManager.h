@class NSArray;

@interface RTTDictionaryManager : NSObject

@property (retain, nonatomic) NSArray *availableDictionaries;

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_downloadAsset:(id)a0;
- (id)_ttyDictionaryAsset;
- (void)activateTTYDictionary;
- (void)deactivateTTYDictionary;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;

@end
