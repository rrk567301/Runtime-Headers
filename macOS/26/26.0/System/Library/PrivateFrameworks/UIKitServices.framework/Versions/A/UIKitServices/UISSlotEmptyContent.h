@interface UISSlotEmptyContent : NSObject {
    struct CGSize { double width; double height; } _contentSize;
}

+ (id)contentWithSize:(struct CGSize { double x0; double x1; })a0;

- (BOOL)isRemote;
- (unsigned char)contentScale;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)image;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)deleteFromLayerContext:(id)a0;
- (BOOL)shouldReplaceExistingContent;

@end
