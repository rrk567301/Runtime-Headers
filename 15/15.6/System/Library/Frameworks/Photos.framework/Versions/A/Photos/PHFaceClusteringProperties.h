@class NSString, PHFaceprint;

@interface PHFaceClusteringProperties : PHFacePropertySet

@property (readonly, nonatomic) PHFaceprint *faceprint;
@property (readonly, nonatomic) NSString *groupingIdentifier;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 face:(id)a1 prefetched:(char)a2;

@end
