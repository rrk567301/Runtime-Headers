@class NSString;

@interface MADManagedKeyValueStore : NSManagedObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) long long value;

+ (id)fetchRequest;
+ (id)valueColumnName;
+ (id)fetchKeyValueStoreByKey:(id)a0 managedObjectContext:(id)a1;
+ (id)fetchOrCreateKeyValueStoreByKey:(id)a0 managedObjectContext:(id)a1;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)keyColumnName;

@end
