@class NSString, NSCKRecordMetadata;

@interface NSCKRecordMetadataSystemFieldsAsset : NSCKMetadataAsset

@property (class, readonly, nonatomic) NSString *entityPath;

@property (retain, nonatomic) NSCKRecordMetadata *record;

@end
