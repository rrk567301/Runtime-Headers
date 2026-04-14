@class NSString, KVItemMapper, NSDictionary;

@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
    NSDictionary *_additionalFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allInstalledAppBundleIdentifiers;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLanguageCode:(id)a0;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (BOOL)_checkAppValidity:(id)a0;
- (id)_appEnumerator;
- (id)_getOverrideByInfoPlist:(id)a0;

@end
