@class NSString, ScreenTimeSettingsRecord;

@interface KeyValueRecord : NSManagedObject

@property (nonatomic, copy) NSString *key;
@property (nonatomic) long long value;
@property (nonatomic, retain) ScreenTimeSettingsRecord *settings;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
