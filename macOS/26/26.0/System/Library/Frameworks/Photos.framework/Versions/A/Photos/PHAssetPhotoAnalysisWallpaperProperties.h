@class NSData, NSDate;

@interface PHAssetPhotoAnalysisWallpaperProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *wallpaperPropertiesData;
@property (readonly, nonatomic) NSDate *wallpaperPropertiesTimestamp;
@property (readonly, nonatomic) unsigned long long wallpaperPropertiesVersion;

+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
