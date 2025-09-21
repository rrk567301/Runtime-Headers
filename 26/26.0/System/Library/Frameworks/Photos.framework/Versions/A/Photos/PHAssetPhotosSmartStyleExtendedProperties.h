@class NSNumber;

@interface PHAssetPhotosSmartStyleExtendedProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSNumber *smartStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *smartStyleToneBias;
@property (readonly, nonatomic) NSNumber *smartStyleColorBias;
@property (readonly, nonatomic) NSNumber *smartStyleIntensity;
@property (readonly, nonatomic) NSNumber *originalSmartStyleCast;
@property (readonly, nonatomic) unsigned short smartStyleIsReversible;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isCurrentlySmartStyleable;
- (BOOL)originallySmartStyleable;

@end
