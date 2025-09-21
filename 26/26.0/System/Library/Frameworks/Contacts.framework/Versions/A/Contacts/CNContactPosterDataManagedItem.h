@class NSUUID, NSString, NSDate, NSNumber, CNContactExternalDetailsManagedObject;

@interface CNContactPosterDataManagedItem : NSManagedObject

@property (retain, nonatomic) NSDate *lastUsedDate;
@property (nonatomic) BOOL ignoredForRevert;
@property (nonatomic) BOOL isCurrent;
@property (retain, nonatomic) NSNumber *itemDetailsNumber;
@property (retain, nonatomic) CNContactExternalDetailsManagedObject *externalDetails;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSDate *deletionDate;

+ (id)entityName;

- (void)acceptVisitor:(id)a0;
- (id)pairedItem;

@end
