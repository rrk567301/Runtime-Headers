@interface NSScrubberArrowButton : NSButton {
    BOOL _isLeft;
}

@property (readonly) BOOL arrowFacesLeft;

+ (Class)cellClass;

- (id)accessibilityLabel;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (long long)accessibilityIndex;
- (id)initWithArrowFacesLeft:(BOOL)a0;

@end
