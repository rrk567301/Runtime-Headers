@class NSString;

@interface _CDBadgeLayer : CALayer {
    NSString *_label;
    struct __CTFramesetter { } *_labelFramesetter;
}

@property (copy) NSString *label;
@property BOOL drawBackground;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)dealloc;

@end
