@class NSSlider, NSTextField;

@interface UINSGameModuleJoystickViewController : UINSGameModuleConfigViewController

@property (weak) NSTextField *keyUp;
@property (weak) NSTextField *keyLeft;
@property (weak) NSTextField *keyRight;
@property (weak) NSTextField *keyDown;
@property (weak) NSSlider *radius;

- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
