@class NSString;

@interface PDFAccessibilityNodeLink : PDFAccessibilityNode

@property (copy, nonatomic) NSString *_stringValue;

- (void).cxx_destruct;
- (id)stringValue;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;

@end
