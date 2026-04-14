@class NSData, NSString, ScreenTimeSettingsRecord;

@interface ListBlobRecord : NSManagedObject

@property (nonatomic, copy) NSData *blob;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *list;
@property (nonatomic, retain) ScreenTimeSettingsRecord *settings;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
