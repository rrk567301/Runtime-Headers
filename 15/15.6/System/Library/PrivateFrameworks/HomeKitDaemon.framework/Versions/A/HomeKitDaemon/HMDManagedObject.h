@class NSString;

@interface HMDManagedObject : NSManagedObject <HMFLogging>

@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (char)validateForInsert:(id *)a0;
- (char)validateForUpdate:(id *)a0;
- (char)validateForInsertOrUpdate:(id *)a0;

@end
