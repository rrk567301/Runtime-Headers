@class PXTitleSubtitleLabelSpec, NSString, CALayer, PXTitleSubtitleCALayerPromise;

@interface PXTitleSubtitleNSLabel : NSView <PXChangeObserver> {
    BOOL _needsUpdateLayerPromise;
}

@property (retain, nonatomic, setter=_setLayerPromise:) PXTitleSubtitleCALayerPromise *_layerPromise;
@property (retain, nonatomic, setter=_setContentLayer:) CALayer *_contentLayer;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) PXTitleSubtitleLabelSpec *spec;
@property (nonatomic) long long typesettingMode;
@property (nonatomic) BOOL rendersTextAsynchronously;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentBounds;
- (BOOL)mouseDownCanMoveWindow;
- (void)_updateLayerPromiseWithChanges:(id /* block */)a0;
- (void)_PXTitleSubtitleNSLabelCommonInitialization;
- (void)_configureLayerPromise:(id)a0;
- (void)_handleChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_invalidateLayerPromise;
- (void)_updateContentLayer;
- (void)_updateLayerPromiseIfNeeded;
- (void)forceTextRendering;
- (double)preferredHeightForWidth:(double)a0;

@end
