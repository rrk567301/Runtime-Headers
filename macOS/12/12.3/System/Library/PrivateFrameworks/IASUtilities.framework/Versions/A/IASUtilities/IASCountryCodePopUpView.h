@class NSBox, NSLayoutConstraint, NSTextField;

@interface IASCountryCodePopUpView : NSView

@property (readonly) BOOL isSeparatorItem;
@property (weak) NSTextField *regionSeperator;
@property (weak) NSTextField *countryCode;
@property (weak) NSTextField *countryName;
@property (weak) NSTextField *dash;
@property (weak) NSBox *separatorLine;
@property (weak) NSLayoutConstraint *topDistanceConstraint;
@property (weak) NSLayoutConstraint *topDistanceUpperConstraint;

+ (void)populateMenuItem:(id)a0 withRepresentedObject:(id)a1;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
