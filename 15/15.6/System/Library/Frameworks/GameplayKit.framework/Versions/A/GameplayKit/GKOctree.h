@interface GKOctree : NSObject {
    void *_cOctree;
}

+ (id)octreeWithBoundingBox:(struct GKBox { })a0 minimumCellSize:(float)a1;

- (void)dealloc;
- (id)init;
- (char)removeElement:(id)a0;
- (id)addElement:(id)a0 withBox:(struct GKBox { })a1;
- (id)addElement:(SEL)a0 withPoint:(id)a1;
- (id)elementsAtPoint:(SEL)a0;
- (id)elementsInBox:(struct GKBox { })a0;
- (id)initWithBoundingBox:(struct GKBox { })a0 minimumCellSize:(float)a1;
- (char)removeElement:(id)a0 withNode:(id)a1;

@end
