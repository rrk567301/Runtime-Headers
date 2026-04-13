@class NSPredicate, NSArray;

@interface ABCNContactFetchRequest : ABCNFetchRequest

@property (copy, nonatomic) NSPredicate *predicate;
@property (copy, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL unifyResults;
@property (nonatomic) BOOL mutableObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)executeFetchWithDataMapper:(id)a0 observer:(id)a1;

@end
