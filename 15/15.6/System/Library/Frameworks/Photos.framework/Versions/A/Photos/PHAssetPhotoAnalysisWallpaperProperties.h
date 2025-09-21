@class NSData, NSDate;

@interface PHAssetPhotoAnalysisWallpaperProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSData *wallpaperPropertiesData;
@property (readonly, nonatomic) NSDate *wallpaperPropertiesTimestamp;
@property (readonly, nonatomic) unsigned long long wallpaperPropertiesVersion;

+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 asset:(id)a1 prefetched:(char)a2;

@end
