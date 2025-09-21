@class KHFrame;

@interface KHFrameRenderer : NSObject {
    KHFrame *_frame;
    char _isResizing;
}

- (void)dealloc;
- (void)clearCache;
- (id)frame;
- (void)setFrame:(id)a0;
- (char)isResizing;
- (void)setIsResizing:(char)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)initForFrame:(id)a0;
- (void)loadAttributes;

@end
