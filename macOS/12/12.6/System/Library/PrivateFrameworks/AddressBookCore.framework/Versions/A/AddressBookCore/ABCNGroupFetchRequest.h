@class NSPredicate;

@interface ABCNGroupFetchRequest : ABCNFetchRequest

@property (copy, nonatomic) NSPredicate *predicate;
@property (nonatomic) BOOL mutableObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)executeFetchWithDataMapper:(id)a0 observer:(id)a1;

@end
