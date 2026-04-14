@class NSData;

@interface FinanceKit.ManagedOrderData : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic) int dataLength;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
