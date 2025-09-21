@class NSDate;

@interface RTAuthorizedLocationConfirmationStatusMO : NSManagedObject

@property long long confirmationStatus;
@property long long confirmationStatusCode;
@property (copy, nonatomic) NSDate *confirmationStatusTime;
@property long long zdrConfirmationStatus;
@property long long zdrConfirmationStatusCode;
@property (copy, nonatomic) NSDate *zdrConfirmationStatusTime;

+ (id)fetchRequest;
+ (id)managedObjectWithAuthorizedLocationConfirmationStatus:(id)a0 inManagedObjectContext:(id)a1;

@end
