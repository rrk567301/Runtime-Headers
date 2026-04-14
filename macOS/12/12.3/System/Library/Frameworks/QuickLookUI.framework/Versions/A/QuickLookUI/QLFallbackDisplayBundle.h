@class NSTextField;

@interface QLFallbackDisplayBundle : QLDisplayBundle {
    NSTextField *_textField;
}

- (void)dealloc;
- (id)quickLookView;
- (id)initWithPreview:(id)a0 owner:(id)a1;
- (int)loadWithHints:(id)a0;

@end
