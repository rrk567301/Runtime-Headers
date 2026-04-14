@class NSArray;

@interface FIChildrenIterator : FINodeIterator

@property (copy, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL includeInvisible;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)next;
- (id)rawNext;
- (unsigned long long)estimatedSize;
- (id)first;
- (BOOL)fullyPopulated;
- (id)initWithChildren:(id)a0 includingInvisibleItems:(BOOL)a1;

@end
