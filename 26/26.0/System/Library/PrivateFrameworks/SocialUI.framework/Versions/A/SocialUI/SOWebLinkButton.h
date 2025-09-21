@class NSDictionary;

@interface SOWebLinkButton : NSButton

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSDictionary *mouseOverAttributes;

+ (Class)cellClass;

- (void)setAttributedTitle:(id)a0;
- (void)setAlignment:(long long)a0;
- (void)setFont:(id)a0;
- (id)init;
- (void)updateTrackingAreas;
- (void)setTitle:(id)a0;
- (void)sizeToFit;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)cursorUpdate:(id)a0;
- (void)_initializeButtonStyle;
- (void)updateAttributedTitle:(BOOL)a0;

@end
