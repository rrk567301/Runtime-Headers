@class NSString, NSCKRecordMetadata;

@interface NSCKRecordMetadataEncodedRecordAsset : NSCKMetadataAsset

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSCKRecordMetadata *record;

@end
