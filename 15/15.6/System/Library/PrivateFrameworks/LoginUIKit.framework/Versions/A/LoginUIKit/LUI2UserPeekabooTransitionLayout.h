@interface LUI2UserPeekabooTransitionLayout : LUI2UserLayout <LUI2UserLayoutProtocol>

+ (Class)layoutAttributesClass;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (char)appearsAsButtonToAccessibility;
- (id)itemFrameForItemIndex:(unsigned long long)a0;
- (char)shouldAnimateToLayout:(id)a0;

@end
