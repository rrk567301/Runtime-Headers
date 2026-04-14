@class NSData, NSString, NSDate;

@interface FinanceKit.ManagedBusinessConnectBrand : NSManagedObject

@property (nonatomic, copy) NSDate *lastUpdatedAt;
@property (nonatomic, copy) NSData *logo;
@property (nonatomic, copy) NSString *businessID;
@property (nonatomic, copy) NSString *companyID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)willSave;

@end
