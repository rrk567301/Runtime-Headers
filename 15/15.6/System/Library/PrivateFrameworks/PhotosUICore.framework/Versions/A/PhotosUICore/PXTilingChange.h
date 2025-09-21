@class NSArray, PXTilingLayout, NSMutableArray;

@interface PXTilingChange : NSObject {
    NSMutableArray *_events;
}

@property (readonly, nonatomic, getter=isIdentity) char identity;
@property (readonly, nonatomic) PXTilingLayout *initialLayout;
@property (readonly, nonatomic) struct CGSize { double width; double height; } initialReferenceSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } initialContentInset;
@property (readonly, nonatomic) NSArray *events;
@property (readonly, copy, nonatomic) NSArray *compositionInvalidationContexts;
@property (readonly, nonatomic) PXTilingLayout *fromLayout;
@property (readonly, nonatomic) PXTilingLayout *toLayout;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } fromReferenceSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } toReferenceSize;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } fromContentInset;
@property (readonly, nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } toContentInset;
@property (readonly, nonatomic) char coordinateSpaceDidChange;
@property (readonly, nonatomic) NSArray *invalidationContexts;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addEvent:(id)a0;
- (id)defaultAnimationOptionsForTilingController:(id)a0;
- (void)recordCompositionInvalidationContexts:(id)a0;
- (void)recordContentInset:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)recordLayout:(id)a0;
- (void)recordReferenceSize:(struct CGSize { double x0; double x1; })a0;

@end
