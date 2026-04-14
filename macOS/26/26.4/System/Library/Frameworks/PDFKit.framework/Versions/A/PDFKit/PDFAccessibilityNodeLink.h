@class NSString, PDFAccessibilityNodeAnnotation;

@interface PDFAccessibilityNodeLink : PDFAccessibilityNode

@property (copy, nonatomic) NSString *_stringValue;
@property (retain, nonatomic) PDFAccessibilityNodeAnnotation *linkAnnotationNode;

- (id)stringValue;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (void)addChild:(id)a0;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributedStringForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityChildren;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityURL;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityVisibleCharacterRange;

@end
