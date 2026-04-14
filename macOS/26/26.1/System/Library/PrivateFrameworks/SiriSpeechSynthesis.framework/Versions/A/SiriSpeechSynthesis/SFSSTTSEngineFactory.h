@class NSMutableDictionary;

@interface SFSSTTSEngineFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *keyToTTSEngineMap;

+ (id)sharedInstance;
+ (id)getKeyByVoiceAsset:(id)a0 resourceAsset:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)getEngineByVoiceAsset:(id)a0 resourceAsset:(id)a1;
- (void)removeAllEngines;
- (void)removeEngineByVoiceAsset:(id)a0 resourceAsset:(id)a1;

@end
