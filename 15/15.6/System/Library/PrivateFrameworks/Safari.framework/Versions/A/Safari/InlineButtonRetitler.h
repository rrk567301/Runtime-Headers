@class NSButton;

@interface InlineButtonRetitler : NSTextField {
    double _horizontalPadding;
}

@property (readonly) NSButton *button;

+ (Class)cellClass;
+ (char)clipsToBounds;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanUp;
- (void)finishEditing;
- (char)beginEditingButton:(id)a0 withTitle:(id)a1;
- (void)cancelEditing;
- (void)resizeToFitTextWithMaximumWidth:(double)a0;

@end
