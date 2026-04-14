@class SORecognitionWindowDoneButtonHighlightView;

@interface SORecognitionWindowDoneButton : NSButton {
    SORecognitionWindowDoneButtonHighlightView *_highlightView;
}

- (void)layout;
- (BOOL)allowsVibrancy;
- (void)dealloc;

@end
