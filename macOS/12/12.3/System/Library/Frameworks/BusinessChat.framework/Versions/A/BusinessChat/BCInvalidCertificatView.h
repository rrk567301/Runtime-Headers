@class NSImageView, NSString, NSTextField, NSView;

@interface BCInvalidCertificatView : NSView

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSImageView *insecureIcon;
@property (retain, nonatomic) NSTextField *titleLabel;
@property (retain, nonatomic) NSTextField *messageLabel;
@property (retain, nonatomic) NSView *contentView;

- (void).cxx_destruct;
- (void)updateLayer;
- (void)setupConstraints;
- (id)initWithHost:(id)a0;
- (void)setupSubviews;

@end
