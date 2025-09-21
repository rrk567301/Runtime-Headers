@class PXGLayout, PXGAnimator;

@interface PXGAnimatorLayout : NSObject

@property (readonly, weak, nonatomic) PXGAnimator *animator;
@property (retain, nonatomic) PXGLayout *inputLayout;

- (struct CGSize { double x0; double x1; })contentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (struct PXGCameraConfiguration { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1; struct { void /* unknown type, empty encoding */ x0[4]; } x2; })cameraConfiguration;
- (id)init;
- (id)fences;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })referenceSize;
- (id)initWithAnimator:(id)a0;
- (id)rootLayout;
- (unsigned int)numberOfSprites;
- (void)enumerateDescendantsLayoutsUsingBlock:(id /* block */)a0;
- (void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)leafSublayoutForSpriteIndex:(unsigned int)a0;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 toDescendantLayout:(id)a1;
- (BOOL)isSpriteIndex:(unsigned int)a0 decoratingSpriteWithIndex:(out unsigned int *)a1;
- (void)removeAllFences;
- (unsigned int)convertSpriteIndex:(unsigned int)a0 fromLayout:(id)a1;
- (unsigned int)viewHostingSpriteIndexForSublayout:(id)a0 spriteIndex:(unsigned int)a1;

@end
