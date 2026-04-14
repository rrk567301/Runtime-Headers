@class NSString, NSCKRecordZoneMetadata;

@interface NSCKRecordZoneMetadataEncodedShareAsset : NSCKMetadataAsset

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;

@end
