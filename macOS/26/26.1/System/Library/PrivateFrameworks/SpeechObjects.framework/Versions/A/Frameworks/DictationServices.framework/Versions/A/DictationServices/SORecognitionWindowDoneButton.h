@class SORecognitionWindowDoneButtonHighlightView;

@interface SORecognitionWindowDoneButton : NSButton {
    SORecognitionWindowDoneButtonHighlightView *_highlightView;
}

- (void)layout;
- (void)dealloc;
- (BOOL)allowsVibrancy;

@end
