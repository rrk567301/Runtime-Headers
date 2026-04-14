@class NSArray, NSCondition;

@interface TTYDictionaryManager : NSObject {
    NSCondition *_condition;
}

@property (retain, nonatomic) NSArray *availableDictionaries;

+ (id)availableDictionaryAssetsUsingRemoteInfo:(BOOL)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadIfNeeded;
- (void)deleteIfNeeded;
- (void)activateTTYDictionary;
- (void)deactivateTTYDictionary;
- (id)_ttyDictionaryAsset;
- (BOOL)downloadAsset:(id)a0 withError:(id *)a1;
- (BOOL)_isStalledAutoDownloadAsset:(id)a0;

@end
