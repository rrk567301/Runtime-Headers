@class NSData, NSDate;

@interface PHAssetPhotoAnalysisWallpaperProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *wallpaperPropertiesData;
@property (readonly, nonatomic) NSDate *wallpaperPropertiesTimestamp;
@property (readonly, nonatomic) unsigned long long wallpaperPropertiesVersion;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)propertySetName;

- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(BOOL)a2;
- (void).cxx_destruct;

@end
