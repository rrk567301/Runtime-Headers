@class NSPredicate;

@interface ABCNGroupFetchRequest : ABCNFetchRequest

@property (copy, nonatomic) NSPredicate *predicate;
@property (nonatomic) char mutableObjects;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeFetchWithDataMapper:(id)a0 observer:(id)a1;

@end
