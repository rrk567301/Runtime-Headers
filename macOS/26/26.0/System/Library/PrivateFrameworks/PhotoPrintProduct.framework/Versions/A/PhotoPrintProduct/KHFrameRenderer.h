@class KHFrame;

@interface KHFrameRenderer : NSObject {
    KHFrame *_frame;
    BOOL _isResizing;
}

- (void)setFrame:(id)a0;
- (void)clearCache;
- (void)dealloc;
- (void)setIsResizing:(BOOL)a0;
- (BOOL)isResizing;
- (id)frame;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)initForFrame:(id)a0;
- (void)loadAttributes;

@end
