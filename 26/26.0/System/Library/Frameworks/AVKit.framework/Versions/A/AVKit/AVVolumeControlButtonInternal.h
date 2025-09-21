@class AVVolumeControlButton;

@interface AVVolumeControlButtonInternal : NSButton

@property (readonly, weak, nonatomic) AVVolumeControlButton *volumeButton;

- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (id)initWithVolumeControlButton:(id)a0;

@end
