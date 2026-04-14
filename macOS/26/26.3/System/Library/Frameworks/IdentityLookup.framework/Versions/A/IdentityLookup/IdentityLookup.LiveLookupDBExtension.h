@class NSString, NSSet;

@interface IdentityLookup.LiveLookupDBExtension : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isAppStoreVendable;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL isInstalled;
@property (nonatomic) short priority;
@property (nonatomic) BOOL shouldRemove;
@property (nonatomic, copy) NSSet *blockingInfo;
@property (nonatomic, copy) NSSet *identityInfo;

- (id)initWithContext:(id)a0;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (id)init;

@end
