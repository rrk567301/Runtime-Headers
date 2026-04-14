@class NSSlider, NSTextField;

@interface UINSGameModuleTiltViewController : UINSGameModuleConfigViewController

@property (weak) NSTextField *neutralLabel;
@property (weak) NSSlider *neutralSlider;
@property (weak) NSSlider *sensitivitySlider;
@property (weak) NSSlider *yawRangeSlider;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)neutralSliderChanged:(id)a0;
- (void)sensitivityChanged:(id)a0;
- (void)yawMaxChanged:(id)a0;

@end
