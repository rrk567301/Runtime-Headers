@interface NSScrubberArrowButton : NSButton {
    char _isLeft;
}

@property (readonly) char arrowFacesLeft;

+ (Class)cellClass;

- (char)acceptsFirstResponder;
- (long long)accessibilityIndex;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (id)initWithArrowFacesLeft:(char)a0;

@end
