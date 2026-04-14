@interface NSScrubberArrowButton : NSButton {
    BOOL _isLeft;
}

@property (readonly) BOOL arrowFacesLeft;

+ (Class)cellClass;

- (id)accessibilityLabel;
- (id)accessibilityRole;
- (BOOL)acceptsFirstResponder;
- (long long)accessibilityIndex;
- (id)initWithArrowFacesLeft:(BOOL)a0;

@end
