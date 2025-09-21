@class TSWPLayoutManager;

@interface TSWPLinkedLayout : TSWPLayout

@property (retain, nonatomic) TSWPLayoutManager *layoutManager;
@property (nonatomic) char textLayoutValid;

- (id)layoutManager;
- (void)setLayoutManager:(id)a0;
- (void)validate;
- (char)isLinked;
- (char)isLastTarget;
- (id)nextTargetFirstColumn;
- (id)previousTargetLastColumn;
- (void)wrappableChildInvalidated:(id)a0;
- (char)isOverflowing;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (char)descendersCannotClip;
- (char)discardLayoutsForDrawableAttachmentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)i_validateTextLayout;
- (void)killDrawableLayouts:(id)a0;
- (char)repShouldPreventCaret;
- (void)setTextLayoutValid:(char)a0;

@end
