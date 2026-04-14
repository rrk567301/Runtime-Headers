@class KHFrame;

@interface KHFrameRenderer : NSObject {
    KHFrame *_frame;
    BOOL _isResizing;
}

- (BOOL)isResizing;
- (void)clearCache;
- (void)setIsResizing:(BOOL)a0;
- (void)dealloc;
- (id)frame;
- (void)setFrame:(id)a0;
- (void)fillContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;
- (id)initForFrame:(id)a0;
- (void)loadAttributes;

@end
