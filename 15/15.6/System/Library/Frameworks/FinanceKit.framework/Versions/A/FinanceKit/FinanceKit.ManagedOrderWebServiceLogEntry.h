@class NSString, _TtC10FinanceKit22ManagedOrderWebService, NSDate;

@interface FinanceKit.ManagedOrderWebServiceLogEntry : NSManagedObject

@property (nonatomic) short levelValue;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;

@end
