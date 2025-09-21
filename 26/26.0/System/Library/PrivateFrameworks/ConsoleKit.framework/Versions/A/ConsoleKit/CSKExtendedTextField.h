@class NSString;
@protocol CSKExtendedTextFieldDelegate;

@interface CSKExtendedTextField : NSTextField

@property (nonatomic) BOOL showsAlternate;
@property (retain, nonatomic) NSString *defaultStringValue;
@property (retain, nonatomic) NSString *alternateStringValue;
@property (weak, nonatomic) id<CSKExtendedTextFieldDelegate> extraDelegate;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_commonInit;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)showAlternateStringValue:(BOOL)a0;

@end
