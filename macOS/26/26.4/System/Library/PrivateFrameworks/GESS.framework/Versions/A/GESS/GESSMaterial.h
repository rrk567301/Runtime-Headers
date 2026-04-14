@class NSDictionary, NSArray;

@interface GESSMaterial : NSObject

@property (retain) NSDictionary *subMaterialNameToIndex;
@property (retain) NSArray *subMaterials;
@property (retain) NSArray *materialParameterData;

- (void).cxx_destruct;
- (id)init;
- (id)initFromMtlFilePath:(id)a0;

@end
