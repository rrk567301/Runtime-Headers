@class NSButton;

@interface InlineButtonRetitler : NSTextField {
    double _horizontalPadding;
}

@property (readonly) NSButton *button;

+ (BOOL)clipsToBounds;
+ (Class)cellClass;

- (void)_cleanUp;
- (id)init;
- (void).cxx_destruct;
- (void)finishEditing;
- (BOOL)beginEditingButton:(id)a0 withTitle:(id)a1;
- (void)cancelEditing;
- (void)resizeToFitTextWithMaximumWidth:(double)a0;

@end
