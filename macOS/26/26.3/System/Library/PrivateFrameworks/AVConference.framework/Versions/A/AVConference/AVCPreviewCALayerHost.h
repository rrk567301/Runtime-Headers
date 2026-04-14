@class VCWeakObjectHolder;

@interface AVCPreviewCALayerHost : CALayerHost {
    VCWeakObjectHolder *_preview;
}

- (void)layoutSublayers;
- (void)dealloc;
- (id)initWithPreview:(id)a0;

@end
