@class NSString, NSAttributedString, NSColor;

@interface MOTextLayer : CATextLayer {
    NSString *_backingString;
    NSAttributedString *_backingAttributedString;
    NSString *_backingPlaceholderString;
    NSAttributedString *_backingPlaceholderAttributedString;
    NSColor *_placeholderColor;
}

@property (nonatomic) BOOL enableImplicitAnimations;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSAttributedString *attributedStringValue;
@property (copy, nonatomic) NSString *placeholderString;
@property (copy, nonatomic) NSAttributedString *placeholderAttributedString;
@property (retain, nonatomic) NSColor *textColor;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_attributes;
- (void)setFont:(void *)a0;
- (id)actionForKey:(id)a0;
- (id)initWithLayer:(id)a0;
- (long long)_textAlignmentFromAlignmentMode:(id)a0;
- (unsigned long long)_lineBreakModeFromTruncationMode:(id)a0;
- (void)_displayPlaceholderStringIfNeeded;

@end
