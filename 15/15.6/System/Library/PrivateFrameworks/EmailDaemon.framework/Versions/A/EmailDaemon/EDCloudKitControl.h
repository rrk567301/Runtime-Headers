@class NSString, NSData;

@interface EDCloudKitControl : NSManagedObject

@property (copy, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (nonatomic) char migratedFromKVSStorage;

+ (id)fetchRequest;

@end
