@class NSString, CNContactPosterManagedObject, NSData, CNContactImageManagedObject;

@interface CNContactExternalDetailsManagedObject : NSManagedObject

@property (retain, nonatomic) NSString *externalUUID;
@property (retain, nonatomic) NSData *fallbackDetailsForExchange;
@property (retain, nonatomic) CNContactPosterManagedObject *poster;
@property (retain, nonatomic) CNContactImageManagedObject *image;

+ (id)entityName;

@end
