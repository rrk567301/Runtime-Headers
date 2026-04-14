@class NSString, NSSet;

@interface ScreenTimeSettingsRecord : NSManagedObject

@property (nonatomic, copy) NSString *userAltDSID;
@property (nonatomic, retain) NSSet *keyBlob;
@property (nonatomic, retain) NSSet *keyValue;
@property (nonatomic, retain) NSSet *listBlob;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
