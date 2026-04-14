@class NSString, NSRLEArray;

@interface NSConcreteAttributedString : NSAttributedString {
    NSString *string;
    NSRLEArray *attributes;
}

- (id)initWithString:(id)a0 attributes:(id)a1;
- (id)attributesAtIndex:(unsigned long long)a0 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithAttributedString:(id)a0;
- (id)attribute:(id)a0 atIndex:(unsigned long long)a1 effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (id)_runArrayHoldingAttributes;
- (id)init;
- (id)initWithString:(id)a0;
- (unsigned long long)length;

@end
