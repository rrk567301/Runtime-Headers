@class TSDFill, NSString, CALayer;

@interface TPPageRep : TSWPPageRep <TSKChangeSourceObserver, TSDMasterDrawableDelegate> {
    CALayer *_horizontalSeparatorLayer;
    CALayer *_verticalSeparatorLayer;
    char _backgroundFillRequiresLayerUpdate;
    char _fillCanApplyToCALayer;
}

@property (retain, nonatomic) TSDFill *cachedBackgroundFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext { } *)a0;
- (char)isOpaque;
- (char)masksToBounds;
- (void)willBeRemoved;
- (char)directlyManagesLayerContent;
- (id)backgroundFill;
- (id)bodyReps;
- (char)childRepIsMasterDrawable:(id)a0;
- (char)childRepIsOnDocSetupCanvas:(id)a0;
- (id)colorBehindBodyTextLayer:(id)a0;
- (char)p_pageRequiresHorizontalSeparator;

@end
