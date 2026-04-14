@class NSView, NSImageView;

@interface EKUIHeaderImageView : EKUISingleViewGadget

@property (retain) NSImageView *imageView;
@property (retain) NSView *gradientView;
@property BOOL hasBeenSetup;

- (void).cxx_destruct;
- (BOOL)shouldDisplay;

@end
