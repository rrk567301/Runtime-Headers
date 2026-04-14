@class NSString, NSImageView, NSImage;
@protocol SiriUICardHeaderViewControllerDelegate;

@interface SiriUICardHeaderViewController : NSViewController

@property (weak) NSImageView *iconView;
@property (weak, nonatomic) id<SiriUICardHeaderViewControllerDelegate> delegate;
@property BOOL allowsStashing;
@property (retain) NSString *summaryTitle;
@property (retain, nonatomic) NSImage *icon;

- (void).cxx_destruct;
- (void)setIcon:(id)a0;
- (id)icon;
- (id)nibBundle;
- (void)stashPressed:(id)a0;

@end
