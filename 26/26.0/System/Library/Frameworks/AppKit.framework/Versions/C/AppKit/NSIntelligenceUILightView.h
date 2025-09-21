@class NSIntelligentLightRoot;

@interface NSIntelligenceUILightView : NSView {
    NSIntelligentLightRoot *_root;
    long long _scope;
    float _minimumPowerLevel;
    double _audioLevel;
    unsigned char _usesAudioLevels : 1;
    unsigned char _isNoisy : 1;
}

@property long long scope;
@property float minimumPowerLevel;
@property BOOL usesAudioLevels;
@property double audioLevel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (void)setRoot:(id)a0;
- (id)makeBackingLayer;
- (void)renewGState;
- (void)resetRoot;
- (id)rootConfiguration;
- (void)viewDidHide;
- (void)viewDidUnhide;

@end
