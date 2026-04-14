@interface NSScrubberArrowButton : NSButton {
    BOOL _isLeft;
}

@property (readonly) BOOL arrowFacesLeft;

+ (Class)cellClass;

- (id)initWithArrowFacesLeft:(BOOL)a0;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (long long)accessibilityIndex;

@end
