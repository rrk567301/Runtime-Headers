@class NSData, NSString, ScreenTimeSettingsRecord;

@interface KeyBlobRecord : NSManagedObject

@property (nonatomic, copy) NSData *blob;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) ScreenTimeSettingsRecord *settings;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
