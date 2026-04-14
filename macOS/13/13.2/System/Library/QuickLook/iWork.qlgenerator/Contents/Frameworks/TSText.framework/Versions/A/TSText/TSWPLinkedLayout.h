@class TSWPLayoutManager;

@interface TSWPLinkedLayout : TSWPLayout

@property (retain, nonatomic) TSWPLayoutManager *layoutManager;
@property (nonatomic) BOOL textLayoutValid;

- (void)validate;
- (void)setLayoutManager:(id)a0;
- (id)layoutManager;
- (BOOL)isLinked;
- (BOOL)isLastTarget;
- (id)previousTargetLastColumn;
- (id)nextTargetFirstColumn;
- (void)wrappableChildInvalidated:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (BOOL)isOverflowing;
- (BOOL)descendersCannotClip;
- (BOOL)discardLayoutsForDrawableAttachmentsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)i_validateTextLayout;
- (void)killDrawableLayouts:(id)a0;
- (void)setTextLayoutValid:(BOOL)a0;
- (BOOL)repShouldPreventCaret;

@end
