@class NSString, SFEntitledAssetManager, SFEntitledAssetConfig;

@interface CSOEPEntitledAssetManager : NSObject <OSDAnalyzerAssetLocker>

@property (retain, nonatomic) SFEntitledAssetManager *entitledAssetManager;
@property (retain, nonatomic) SFEntitledAssetConfig *entitledAssetConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)assetVersion;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (void)resetTimer;
- (id)installedAssetPath;

@end
