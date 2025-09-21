@class NSPredicate, NSArray;

@interface ABCNContactFetchRequest : ABCNFetchRequest

@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *keysToFetch;
@property (nonatomic) char unifyResults;
@property (nonatomic) char mutableObjects;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)executeFetchWithDataMapper:(id)a0 observer:(id)a1;

@end
