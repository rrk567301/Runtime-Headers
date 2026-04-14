@class NSLayoutConstraint, CalUILabel;

@interface EKUISubtitleGadget : EKUISingleViewGadget

@property (retain) CalUILabel *subtitleLabel;
@property (retain) NSLayoutConstraint *zeroHeightConstraint;

- (void).cxx_destruct;
- (BOOL)shouldDisplay;

@end
