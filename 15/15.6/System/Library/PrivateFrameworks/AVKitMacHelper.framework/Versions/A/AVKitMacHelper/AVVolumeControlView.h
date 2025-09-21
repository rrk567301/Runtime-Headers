@protocol AVVolumeControlViewDelegate;

@interface AVVolumeControlView : NSView

@property (weak) id<AVVolumeControlViewDelegate> delegate;
@property (getter=isMuted) char muted;
@property double volume;

- (void).cxx_destruct;

@end
