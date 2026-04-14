@interface RBDisplayListItemPlaceholder : NSObject <RBPlaceholderStyleContent> {
    const void *_style;
    const struct Item { void /* function */ **x0; struct Item *x1; struct Style *x2; struct ClipNode *x3; struct Metadata *x4; unsigned int x5; void /* unknown type, blank encoding */ x6; unsigned char x7 : 6; unsigned short x8 : 10; } *_item;
    void *_list;
}

@property (readonly, nonatomic) struct { unsigned char x0[16]; } styleNamespace;
@property (readonly, nonatomic) unsigned int styleIdentifier;
@property (readonly, nonatomic) struct { unsigned char x0[16]; } itemNamespace;
@property (readonly, nonatomic) unsigned int itemIdentifier;
@property (nonatomic) float alpha;
@property (nonatomic) int blendMode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;

- (void)drawCopyInState:(struct _RBDrawingState { } *)a0 alpha:(float)a1;
- (void)drawInState:(struct _RBDrawingState { } *)a0 alpha:(float)a1;

@end
