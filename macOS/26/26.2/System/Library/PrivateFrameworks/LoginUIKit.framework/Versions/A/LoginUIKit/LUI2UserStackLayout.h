@class LUI2UserPeekabooTransitionLayout;

@interface LUI2UserStackLayout : LUI2UserLayout <LUI2UserLayoutProtocol>

@property (retain) LUI2UserPeekabooTransitionLayout *transitionLayout;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)a0;
- (void)dealloc;
- (BOOL)appearsAsButtonToAccessibility;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (id)layoutForTransitonToLayout:(id)a0;
- (BOOL)shouldAnimateToLayout:(id)a0;

@end
