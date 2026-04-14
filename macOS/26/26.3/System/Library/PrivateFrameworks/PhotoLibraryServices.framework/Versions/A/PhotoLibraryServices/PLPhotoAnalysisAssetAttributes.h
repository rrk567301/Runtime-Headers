@class NSData, PLManagedAsset, NSDate;

@interface PLPhotoAnalysisAssetAttributes : PLManagedObject

@property (retain, nonatomic) NSData *wallpaperPropertiesData;
@property (nonatomic) unsigned long long wallpaperPropertiesVersion;
@property (retain, nonatomic) NSDate *wallpaperPropertiesTimestamp;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)fetchRequest;
+ (id)entityName;

@end
