@class LUI2UserPeekabooTransitionLayout;

@interface LUI2UserStackLayout : LUI2UserLayout <LUI2UserLayoutProtocol>

@property (retain) LUI2UserPeekabooTransitionLayout *transitionLayout;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidateLayoutWithContext:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (char)appearsAsButtonToAccessibility;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (id)layoutForTransitonToLayout:(id)a0;
- (char)shouldAnimateToLayout:(id)a0;

@end
