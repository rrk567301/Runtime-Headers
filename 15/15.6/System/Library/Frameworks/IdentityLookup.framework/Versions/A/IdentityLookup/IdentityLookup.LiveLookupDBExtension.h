@class NSString, NSSet;

@interface IdentityLookup.LiveLookupDBExtension : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) char isAppStoreVendable;
@property (nonatomic) char isEnabled;
@property (nonatomic) char isInstalled;
@property (nonatomic) short priority;
@property (nonatomic) char shouldRemove;
@property (nonatomic, retain) NSSet *blockingInfo;
@property (nonatomic, retain) NSSet *identityInfo;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
