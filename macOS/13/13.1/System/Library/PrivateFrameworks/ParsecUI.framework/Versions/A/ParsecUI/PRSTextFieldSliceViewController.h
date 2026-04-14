@class NSTextField, NSString, NSFont, PRSTextFieldSliceView, NSColor;

@interface PRSTextFieldSliceViewController : PRSSliceViewController

@property (readonly) PRSTextFieldSliceView *textFieldSliceView;
@property (readonly) NSTextField *textField;
@property BOOL hasSyncedAttributes;
@property (nonatomic) BOOL noWrap;
@property (nonatomic) double gapAbove;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSFont *textFont;
@property (nonatomic) long long alignment;

- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (double)height;
- (void)awakeFromNib;
- (id)initWithString:(id)a0 font:(id)a1;
- (void)syncAttributes;
- (id)aboveConstraint;
- (id)initWithString:(id)a0 font:(id)a1 color:(id)a2;
- (id)initWithString:(id)a0 font:(id)a1 color:(id)a2 alignment:(long long)a3;

@end
