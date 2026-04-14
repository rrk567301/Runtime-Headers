@class NSString, FI_TAirDropProgressLayer;

@interface FI_TAirDropProgressView : FI_TUpdateLayerView <CALayerDelegate, NSViewLayerContentScaleDelegate> {
    FI_TAirDropProgressLayer *_progressLayer;
}

@property (nonatomic) double percentComplete;
@property (nonatomic) BOOL indeterminate;
@property (nonatomic) BOOL pressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setIndeterminate:(BOOL)a0;
- (BOOL)indeterminate;
- (void)updateLayer;
- (void)awakeFromNib;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)initCommon;
- (double)percentComplete;
- (void)setPercentComplete:(double)a0;
- (void)resetProgress;
- (BOOL)shouldShowProgressLayer;

@end
