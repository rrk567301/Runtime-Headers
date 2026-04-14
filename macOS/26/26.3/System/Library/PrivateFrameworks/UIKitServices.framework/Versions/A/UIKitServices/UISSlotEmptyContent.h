@interface UISSlotEmptyContent : NSObject {
    struct CGSize { double width; double height; } _contentSize;
}

+ (id)contentWithSize:(struct CGSize { double x0; double x1; })a0;

- (BOOL)isRemote;
- (struct CGSize { double x0; double x1; })contentSize;
- (unsigned char)contentScale;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)image;
- (void)deleteFromLayerContext:(id)a0;
- (BOOL)shouldReplaceExistingContent;

@end
