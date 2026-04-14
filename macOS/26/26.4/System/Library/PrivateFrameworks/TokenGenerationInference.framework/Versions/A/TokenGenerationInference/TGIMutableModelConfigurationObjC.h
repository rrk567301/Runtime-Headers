@class NSString, TGIE5BaseModelObjC;

@interface TGIMutableModelConfigurationObjC : TGIModelConfigurationObjC

@property (copy) NSString *serializeModelIOPath;
@property (retain) TGIE5BaseModelObjC *baseModel;
@property BOOL useModelCatalogE5CompilerCache;
@property BOOL useEnergyEfficientMode;
@property BOOL ignoreUnknownTokens;
@property (copy) NSString *assetIdentifier;

@end
