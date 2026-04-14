@class NSButton;

@interface InlineButtonRetitler : NSTextField {
    double _horizontalPadding;
}

@property (readonly) NSButton *button;

+ (Class)cellClass;
+ (BOOL)clipsToBounds;

- (void).cxx_destruct;
- (id)init;
- (void)_cleanUp;
- (void)finishEditing;
- (BOOL)beginEditingButton:(id)a0 withTitle:(id)a1;
- (void)cancelEditing;
- (void)resizeToFitTextWithMaximumWidth:(double)a0;

@end
