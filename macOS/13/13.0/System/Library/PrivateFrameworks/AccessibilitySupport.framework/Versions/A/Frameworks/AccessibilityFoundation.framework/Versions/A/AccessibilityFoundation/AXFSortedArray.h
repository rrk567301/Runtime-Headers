@class NSArray, NSMutableArray;

@interface AXFSortedArray : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) NSMutableArray *_mutableObjects;
@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) id /* block */ comparator;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithComparator:(id /* block */)a0;
- (id)initWithObjects:(id)a0 comparator:(id /* block */)a1;

@end
