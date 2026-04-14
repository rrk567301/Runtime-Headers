@interface NSScrubberArrowButton : NSButton {
    BOOL _isLeft;
}

@property (readonly) BOOL arrowFacesLeft;

+ (Class)cellClass;

- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (long long)accessibilityIndex;
- (id)initWithArrowFacesLeft:(BOOL)a0;

@end
