@class AVVolumeControlButton;

@interface AVVolumeControlButtonInternal : NSButton

@property (readonly, weak, nonatomic) AVVolumeControlButton *volumeButton;

- (void).cxx_destruct;
- (char)resignFirstResponder;
- (id)initWithVolumeControlButton:(id)a0;

@end
