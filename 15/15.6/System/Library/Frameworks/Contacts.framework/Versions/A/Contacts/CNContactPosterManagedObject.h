@class NSUUID, NSString, NSData, NSDate, CNContactImageManagedObject;

@interface CNContactPosterManagedObject : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) char ignoredForRevert;
@property (retain, nonatomic) NSData *posterData;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSData *visualFingerprintData;
@property (nonatomic) char contentIsSensitive;
@property (retain, nonatomic) CNContactImageManagedObject *pairedImage;

+ (id /* block */)managedObjectToContactPosterTransform;

- (void)setupWithContactPoster:(id)a0 contactIdentifier:(id)a1;
- (void)setupWithContactPoster:(id)a0 pairedImage:(id)a1 contactIdentifier:(id)a2;
- (void)updateWithContactPoster:(id)a0;
- (void)updateWithContactPoster:(id)a0 pairedImage:(id)a1;

@end
