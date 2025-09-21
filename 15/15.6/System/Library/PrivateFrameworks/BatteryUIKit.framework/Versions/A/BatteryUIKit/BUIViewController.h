@class NSImageView, NSTextField;

@interface BUIViewController : NSObject

@property char powerChimeView;
@property (retain) NSImageView *batteryImageView;
@property (retain) NSTextField *batteryImageLabel;
@property (getter=isHidden) char hidden;
@property double redStateTriggerLevel;

- (id)init;
- (void).cxx_destruct;
- (void)setHidden:(char)a0;
- (id)initPowerChimeView;
- (void)updateWithParameters:(id)a0;
- (void)updateWithParametersWithPercentCharged:(double)a0;
- (void)updateWithParametersWithPercentCharged:(double)a0 useRed:(char)a1;

@end
