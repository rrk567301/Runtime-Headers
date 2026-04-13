@class NSString;

@interface CalStoreRemoteManagedObject : CalStoreRemoteObject

@property (retain, nonatomic) NSString *objectId;

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)a0;
+ (id)fetchObjectWithUID:(id)a0;
+ (id)fetchObjectWithObjectId:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)saveWithError:(id *)a0;
- (BOOL)removeWithError:(id *)a0;

@end
