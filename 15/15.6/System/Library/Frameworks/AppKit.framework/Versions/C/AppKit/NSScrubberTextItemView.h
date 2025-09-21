@class NSString, NSTextField;

@interface NSScrubberTextItemView : NSScrubberItemView

@property (readonly) NSTextField *textField;
@property (copy) NSString *title;

+ (id)keyPathsForValuesAffectingTitle;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)declaredLayoutConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isFlipped;

@end
