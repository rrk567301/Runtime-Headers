@class KHFrame;

@interface KHFrameRenderer : NSObject {
    KHFrame *_frame;
    BOOL _isResizing;
}

- (void)setIsResizing:(BOOL)a0;
- (void)clearCache;
- (void)setFrame:(id)a0;
- (id)frame;
- (BOOL)isResizing;
- (void)dealloc;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)initForFrame:(id)a0;
- (void)loadAttributes;

@end
