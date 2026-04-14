@class NSString, NSArray;

@interface AMScattering : NSObject

@property (readonly) NSString *materialName;
@property (readonly) NSString *materialDescription;
@property (readonly) NSArray *frequencyBands;
@property (copy) NSArray *scatteringUserData;
@property (readonly) NSArray *scatteringReferenceData;
@property (readonly) NSArray *uncertaintyReferenceData;
@property (readonly) NSArray *numDataPointsReferenceData;
@property (readonly) int totalNumDataSetsReferenceData;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithValues:(id)a0 error:(id *)a1;
- (id)initWithMaterialName:(id)a0;
- (BOOL)validatedWithoutError:(id *)a0;

@end
