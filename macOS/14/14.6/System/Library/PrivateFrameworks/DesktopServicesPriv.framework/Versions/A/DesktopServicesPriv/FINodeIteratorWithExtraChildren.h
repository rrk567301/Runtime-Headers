@class FINodeIterator;

@interface FINodeIteratorWithExtraChildren : FINodeIterator

@property (retain, nonatomic) FINodeIterator *baseIterator;
@property (nonatomic) BOOL baseIteratorDone;
@property (retain, nonatomic) FINodeIterator *extraIterator;

- (void).cxx_destruct;
- (id)next;
- (unsigned long long)estimatedSize;
- (id)first;
- (BOOL)fullyPopulated;
- (id)initWithContainer:(id)a0 extraChildren:(id)a1 synchronous:(BOOL)a2 includingInvisibleItems:(BOOL)a3;

@end
