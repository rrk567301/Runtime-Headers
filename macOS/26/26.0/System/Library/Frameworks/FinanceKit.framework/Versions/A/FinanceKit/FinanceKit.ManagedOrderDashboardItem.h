@class _TtC10FinanceKit12ManagedOrder, _TtC10FinanceKit30ManagedOrderDashboardItemMonth, NSDate;

@interface FinanceKit.ManagedOrderDashboardItem : NSManagedObject

@property (nonatomic, copy) NSDate *storedArchiveDate;
@property (nonatomic) BOOL storedShowsAsActive;
@property (nonatomic, retain) _TtC10FinanceKit12ManagedOrder *classicOrder;
@property (nonatomic, retain) _TtC10FinanceKit30ManagedOrderDashboardItemMonth *dashboardItemMonth;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
