@class NSImageView, NSTextField;

@interface BUIViewController : NSObject

@property BOOL powerChimeView;
@property (retain) NSImageView *batteryImageView;
@property (retain) NSTextField *batteryImageLabel;
@property (getter=isHidden) BOOL hidden;
@property double redStateTriggerLevel;

- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initPowerChimeView;
- (void)updateWithParameters:(id)a0;
- (void)updateWithParametersWithPercentCharged:(double)a0;
- (void)updateWithParametersWithPercentCharged:(double)a0 useRed:(BOOL)a1;

@end
