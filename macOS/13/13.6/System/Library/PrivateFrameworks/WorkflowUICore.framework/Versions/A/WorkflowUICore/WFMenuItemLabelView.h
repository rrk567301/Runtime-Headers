@class NSString, NSTextField;

@interface WFMenuItemLabelView : NSView

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL disabled;
@property (readonly, nonatomic) NSTextField *titleLabel;
@property (readonly, nonatomic) NSTextField *subtitleLabel;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } titleMatchRange;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } subtitleMatchRange;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)generateAttributedStringForText:(id)a0 font:(id)a1 showingMatches:(BOOL)a2 matchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 disabled:(BOOL)a2;
- (void)regenerateStrings;

@end
