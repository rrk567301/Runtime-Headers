@class NSIntelligentLightRoot;

@interface NSIntelligentLightView : NSView {
    NSIntelligentLightRoot *_root;
    long long _scope;
    double _audioLevel;
    unsigned char _usesAudioLevels : 1;
}

@property long long scope;
@property BOOL usesAudioLevels;
@property double audioLevel;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)makeBackingLayer;
- (void)renewGState;
- (void)viewDidMoveToWindow;

@end
