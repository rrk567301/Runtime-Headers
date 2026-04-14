@class NSArray, NSAttributedString;

@interface Feedback.DropRejectingTextView : NSTextView

@property (nonatomic, retain) NSAttributedString *placeholderAttributedString;
@property (nonatomic, readonly) NSArray *acceptableDragTypes;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
