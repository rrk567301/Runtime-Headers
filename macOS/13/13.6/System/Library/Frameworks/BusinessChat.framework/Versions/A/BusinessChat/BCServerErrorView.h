@class NSView, NSTextField;

@interface BCServerErrorView : NSView

@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSView *contentView;

- (id)init;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)setupConstraints;
- (void)setupSubviews;

@end
