@class NSString, QCSCN_LoadingProgressIndicatorLayer, CAKeyframeAnimation, CATextLayer;

@interface QCSCN_LoadingLayer : CALayer {
    CATextLayer *_textLayer;
    CAKeyframeAnimation *_rotation;
    QCSCN_LoadingProgressIndicatorLayer *_progressIndicatorLayer;
    char _showText;
}

@property (copy) NSString *loadingString;
@property char whiteProgressIndicator;

- (void)dealloc;
- (id)init;
- (void)layoutSublayers;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)didHide;
- (void)willShow;

@end
