@class NSButton;

@interface InlineButtonRetitler : NSTextField {
    double _horizontalPadding;
}

@property (readonly) NSButton *button;

+ (Class)cellClass;

- (id)init;
- (void).cxx_destruct;
- (void)_cleanUp;
- (void)finishEditing;
- (BOOL)beginEditingButton:(id)a0 withTitle:(id)a1;
- (void)resizeToFitTextWithMaximumWidth:(double)a0;
- (void)cancelEditing;

@end
