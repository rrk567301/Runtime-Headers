@class NSString, CSUAFAssetManager;

@interface SSRUafAssetProvider : NSObject <SSRAssetProviding>

@property (retain, nonatomic) CSUAFAssetManager *uafAssetManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)getAssetProviderType;
- (id)installedAssetOfType:(unsigned long long)a0 forLanguageCode:(id)a1;

@end
