@class NSButton, NSArray, NSImageSymbolConfiguration;

@interface VUIPlayerControlsView : NSView

@property (retain, nonatomic) NSImageSymbolConfiguration *buttonSymbolConfig;
@property (retain, nonatomic) NSButton *playButton;
@property (retain, nonatomic) NSButton *muteButton;
@property (retain, nonatomic) NSButton *fullScreenButton;
@property (retain, nonatomic) NSArray *visibleButtons;
@property (retain, nonatomic) NSArray *allButtons;
@property (nonatomic) unsigned long long disableConfigurations;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })fittingSize;
- (void).cxx_destruct;
- (id)createBaseControlButton;
- (id)createFullScreenButton;
- (id)createMuteButton;
- (id)createPlayPauseButton;
- (void)updateVisibleButtons;

@end
