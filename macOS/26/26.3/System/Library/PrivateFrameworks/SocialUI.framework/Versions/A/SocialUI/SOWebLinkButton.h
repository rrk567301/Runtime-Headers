@class NSDictionary;

@interface SOWebLinkButton : NSButton

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSDictionary *mouseOverAttributes;

+ (Class)cellClass;

- (void)mouseExited:(id)a0;
- (void)setFont:(id)a0;
- (void)sizeToFit;
- (void)mouseEntered:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (id)init;
- (void)setAlignment:(long long)a0;
- (void)updateTrackingAreas;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)awakeFromNib;
- (void)cursorUpdate:(id)a0;
- (void)_initializeButtonStyle;
- (void)updateAttributedTitle:(BOOL)a0;

@end
