@class NSString;

@interface PDFAccessibilityNodeHeading : PDFAccessibilityNode

@property (copy, nonatomic) NSString *_stringValue;

- (id)stringValue;
- (id)accessibilityValue;
- (id)accessibilityTitle;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (unsigned long long)_level;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;
- (void)buildAccessibilityHierarchy;

@end
