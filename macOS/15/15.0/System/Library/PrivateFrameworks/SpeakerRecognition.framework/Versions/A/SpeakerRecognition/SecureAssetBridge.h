@class SecureMemoryIndex, NSString, NSDictionary, NSData, NSURL;

@interface SecureAssetBridge : NSObject

@property (retain, nonatomic) NSData *cachedConfigInfo;
@property (retain, nonatomic) NSData *cachedConfigSatInfo;
@property (readonly, nonatomic) unsigned long long assettype;
@property (readonly, copy, nonatomic) NSString *configVersion;
@property (readonly, copy, nonatomic) NSURL *assetConfigurationPath;
@property (readonly, copy, nonatomic) NSURL *resourcePath;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) NSString *categoryConfigFileName;
@property (readonly, copy, nonatomic) NSString *defaultCategoryConfigFileName;
@property (readonly, copy, nonatomic) NSURL *categoryResourcePathURL;
@property (readonly, copy, nonatomic) NSDictionary *cachedInfo;
@property (readonly, copy, nonatomic) SecureMemoryIndex *memoryIndex;
@property (readonly, copy, nonatomic) SecureMemoryIndex *satMemoryIndex;

- (id)init;
- (void).cxx_destruct;
- (id)configData;
- (float)getFloat:(id)a0 category:(id)a1 defaultValue:(float)a2;
- (BOOL)containsCategory:(id)a0;
- (BOOL)getBool:(id)a0 category:(id)a1 defaultValue:(BOOL)a2;
- (id)getDictionaryArray:(id)a0 category:(id)a1;
- (id)getString:(id)a0 category:(id)a1 defaultValue:(id)a2;
- (unsigned long long)getUnsignedLongLongValue:(id)a0 category:(id)a1 defaultValue:(unsigned long long)a2;
- (id)hashFromResourcePath;
- (id)_configData:(id)a0 defaultName:(id)a1;
- (void)_initializeMemoryIndexForCategory:(id)a0 resourcePath:(id)a1;
- (id)configDataSat;
- (BOOL)containsKey:(id)a0 category:(id)a1;
- (id)decodedInfo;
- (id)getDictionary:(id)a0 category:(id)a1;
- (id)getString:(id)a0 category:(id)a1;
- (id)getStringArray:(id)a0 category:(id)a1;
- (id)initWithAssetType:(unsigned long long)a0 configurationPath:(id)a1 configVersion:(id)a2 category:(id)a3 categoryResourceURLPath:(id)a4 categoryConfigFileName:(id)a5 defaultCategoryConfigFileName:(id)a6;

@end
