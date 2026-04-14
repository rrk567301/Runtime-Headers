@class NSNumber;

@interface PHAssetPhotosSmartStyleExtendedProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSNumber *smartStyleRenderingVersion;
@property (readonly, nonatomic) NSNumber *smartStyleToneBias;
@property (readonly, nonatomic) NSNumber *smartStyleColorBias;
@property (readonly, nonatomic) NSNumber *smartStyleIntensity;
@property (readonly, nonatomic) NSNumber *originalSmartStyleCast;
@property (readonly, nonatomic) unsigned short smartStyleIsReversible;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;
- (BOOL)isCurrentlySmartStyleable;
- (BOOL)originallySmartStyleable;

@end
