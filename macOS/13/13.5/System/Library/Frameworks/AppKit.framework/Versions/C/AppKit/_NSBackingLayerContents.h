@class CALayer, NSString;

@interface _NSBackingLayerContents : NSObject <CALayerDelegate> {
    CALayer *_backingLayer;
    CALayer *_contentLayer;
}

@property CALayer *backingLayer;
@property (readonly) CALayer *contentLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)update;
- (void *)CA_copyRenderValue;
- (void)CA_prepareRenderValue;
- (BOOL)NS_hasPartialPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)NS_hasPrefetchedContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)display;
- (void)invalidateRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })NS_activeVisibleRect;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;

@end
