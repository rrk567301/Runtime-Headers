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

- (void)initCommon;
- (void)resetProgress;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)awakeFromNib;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (BOOL)shouldShowProgressLayer;

@end
