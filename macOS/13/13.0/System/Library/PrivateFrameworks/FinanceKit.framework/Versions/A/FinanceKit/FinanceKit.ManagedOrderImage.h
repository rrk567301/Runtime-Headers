@class NSData, NSString;

@interface FinanceKit.ManagedOrderImage : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *localizationName;
@property (nonatomic) int height;
@property (nonatomic) int width;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
