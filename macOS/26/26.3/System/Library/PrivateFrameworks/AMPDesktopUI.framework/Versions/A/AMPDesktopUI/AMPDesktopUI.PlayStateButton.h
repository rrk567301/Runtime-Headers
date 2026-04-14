@class NSImage;

@interface AMPDesktopUI.PlayStateButton : NSButton

@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL isBuffering;
@property (nonatomic) BOOL isRolledOver;
@property (nonatomic, readonly) NSImage *imageForPlayState;
@property (nonatomic, readonly) BOOL hiddenForPlayState;

+ (id)keyPathsForValuesAffectingHiddenForPlayState;
+ (id)keyPathsForValuesAffectingImageForPlayState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)propertyKeysForViewSpy;

@end
