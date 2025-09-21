@class SORecognitionWindowDoneButtonHighlightView;

@interface SORecognitionWindowDoneButton : NSButton {
    SORecognitionWindowDoneButtonHighlightView *_highlightView;
}

- (void)dealloc;
- (void)layout;
- (char)allowsVibrancy;

@end
