@class NSDictionary, NSArray;

@interface GESSMaterial : NSObject

@property (retain) NSDictionary *subMaterialNameToIndex;
@property (retain) NSArray *subMaterials;
@property (retain) NSArray *materialParameterData;

- (id)init;
- (void).cxx_destruct;
- (id)initFromMtlFilePath:(id)a0;

@end
