@class KHFrame;

@interface KHFrameRenderer : NSObject {
    KHFrame *_frame;
    BOOL _isResizing;
}

- (void)dealloc;
- (id)frame;
- (void)setFrame:(id)a0;
- (void)clearCache;
- (BOOL)isResizing;
- (void)setIsResizing:(BOOL)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (void)loadAttributes;
- (id)initForFrame:(id)a0;

@end
