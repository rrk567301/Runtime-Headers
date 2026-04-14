@class NSIndexSet, NSMutableIndexSet;

@interface _NSRTree : NSObject {
    struct shared_ptr<_NSRTreeContainerNode> { struct _NSRTreeContainerNode *__ptr_; struct __shared_weak_count *__cntrl_; } _root;
    struct _NSRange { unsigned long long location; unsigned long long length; } _allIndexesRange;
    NSMutableIndexSet *_allIndexes;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingFrame;
@property (readonly, nonatomic) NSIndexSet *allIndexes;

- (id)visualDescription;
- (id)description;
- (id)init;
- (id)indexesForFramesIntersectingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)enumerateFramesWithBlock:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForIndex:(long long)a0;
- (void)insertFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndex:(long long)a1;
- (id).cxx_construct;

@end
