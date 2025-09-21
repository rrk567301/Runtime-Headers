@class NSString, PHFace;

@interface PHFacePropertySet : NSObject <PHFacePropertySet>

@property (class, readonly, nonatomic) NSString *propertySetName;

@property (readonly, weak, nonatomic) PHFace *face;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (char)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToPrefetch;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 face:(id)a1 prefetched:(char)a2;

@end
