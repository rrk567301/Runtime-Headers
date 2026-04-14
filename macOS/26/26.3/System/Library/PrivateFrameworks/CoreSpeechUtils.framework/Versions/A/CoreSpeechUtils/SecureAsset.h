@class NSString;

@interface SecureAsset : NSObject {
    void /* function */ resourcePath;
    void /* function */ assetHash;
    void /* function */ assetVersion;
    void /* unknown type, empty encoding */ assetFileName;
    void /* unknown type, empty encoding */ assetLoader;
    void /* unknown type, empty encoding */ cachedInfo;
}

@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) NSString *assetHash;
@property (nonatomic, readonly) NSString *assetVersion;

- (id)init;
- (void).cxx_destruct;
- (id)assetPath;
- (id)initWithResourcePath:(id)a0 assetFileName:(id)a1 assetVersion:(id)a2 assetHash:(id)a3;
- (id)getMemoryIndexWithKey:(id)a0 category:(id)a1;
- (id)getStringArrayWithKey:(id)a0 category:(id)a1;
- (BOOL)containsCategoryWithCategory:(id)a0;
- (BOOL)containsKeyWithKey:(id)a0 category:(id)a1;
- (BOOL)getBoolWithKey:(id)a0 category:(id)a1 defaultValue:(BOOL)a2;
- (id)getConfigDataWithFileName:(id)a0 prefix:(id)a1;
- (id)getDataWithFileName:(id)a0;
- (id)getDictionaryArrayWithKey:(id)a0 category:(id)a1;
- (id)getDictionaryWithKey:(id)a0 category:(id)a1;
- (float)getFloatWithKey:(id)a0 category:(id)a1 defaultValue:(float)a2;
- (long long)getIntWithKey:(id)a0 category:(id)a1 defaultValue:(long long)a2;
- (id)getStringWithCategory:(id)a0;
- (id)getStringWithKey:(id)a0 category:(id)a1;
- (id)getStringWithKey:(id)a0 category:(id)a1 defaultValue:(id)a2;
- (unsigned long long)getUnsignedLongLongValueWithKey:(id)a0 category:(id)a1 defaultValue:(unsigned long long)a2;

@end
