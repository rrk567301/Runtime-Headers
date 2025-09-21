@class NSString, TGIE5BaseModelObjC;

@interface TGIMutableE5ModelConfigurationObjC : TGIE5ModelConfigurationObjC

@property (copy) NSString *serializeModelIOPath;
@property (retain) TGIE5BaseModelObjC *baseModel;
@property char useModelCatalogE5CompilerCache;
@property char useEnergyEfficientMode;
@property (copy) NSString *assetIdentifier;

@end
