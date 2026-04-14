@class SORecognitionWindowDoneButtonHighlightView;

@interface SORecognitionWindowDoneButton : NSButton {
    SORecognitionWindowDoneButtonHighlightView *_highlightView;
}

- (BOOL)allowsVibrancy;
- (void)dealloc;
- (void)layout;

@end
