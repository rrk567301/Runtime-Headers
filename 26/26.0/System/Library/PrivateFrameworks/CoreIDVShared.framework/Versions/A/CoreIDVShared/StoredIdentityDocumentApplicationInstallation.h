@class NSString, NSArray, NSSet;

@interface StoredIdentityDocumentApplicationInstallation : NSManagedObject

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSArray *sceneIdentifiers;
@property (nonatomic, retain) NSSet *mobileDocumentRegistrations;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
