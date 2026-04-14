@class NSSet;

@interface FinanceKit.ManagedOrderDashboardItemMonth : NSManagedObject

@property (nonatomic) short year;
@property (nonatomic) short month;
@property (nonatomic) short countOfDashboardItems;
@property (nonatomic) short countOfDashboardItemsThatShowAsActive;
@property (nonatomic, retain) NSSet *dashboardItems;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
