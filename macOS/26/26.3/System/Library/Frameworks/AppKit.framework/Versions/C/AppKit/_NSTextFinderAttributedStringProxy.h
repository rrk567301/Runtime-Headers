@class NSString;

@interface _NSTextFinderAttributedStringProxy : NSAttributedString {
    NSString *_string;
}

- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithString:(id)a0;
- (void)dealloc;
- (id)string;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })doubleClickAtIndex:(unsigned long long)a0;

@end
