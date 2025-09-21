@class NSData, NSString, NSUUID;

@interface FinanceKit.ManagedAnnotation : NSManagedObject

@property (nonatomic, copy) NSData *annotation;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *applicationGroupID;
@property (nonatomic, copy) NSUUID *annotatedObjectID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
