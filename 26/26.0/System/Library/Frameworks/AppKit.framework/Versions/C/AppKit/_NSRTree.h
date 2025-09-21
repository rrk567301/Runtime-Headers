@class NSIndexSet, NSMutableIndexSet;

@interface _NSRTree : NSObject {
    struct shared_ptr<_NSRTreeContainerNode> { struct _NSRTreeContainerNode *__ptr_; struct __shared_weak_count *__cntrl_; } _root;
    struct _NSRange { unsigned long long location; unsigned long long length; } _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingFrame;
@property (readonly, nonatomic) NSIndexSet *allIndexes;

- (id)visualDescription;
- (id)init;
- (id)description;
- (id)indexesForFramesIntersectingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(long long)a0;
- (id).cxx_construct;
- (void)enumerateFramesWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)insertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndex:(long long)a1;

@end
