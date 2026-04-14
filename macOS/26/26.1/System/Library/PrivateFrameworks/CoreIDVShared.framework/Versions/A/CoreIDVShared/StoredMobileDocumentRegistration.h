@class StoredIdentityDocumentApplicationInstallation, NSArray, NSString, NSDate;

@interface StoredMobileDocumentRegistration : NSManagedObject

@property (nonatomic, retain) NSArray *authorityKeyIdentifiers;
@property (nonatomic, copy) NSString *documentIdentifier;
@property (nonatomic, copy) NSString *documentType;
@property (nonatomic, copy) NSDate *invalidationDate;
@property (nonatomic, retain) StoredIdentityDocumentApplicationInstallation *applicationInstallation;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
