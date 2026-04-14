@interface AppKit._MaximumStringCountFormatter : AppKit._BasicStringFormatter {
    void /* unknown type, empty encoding */ maximumCount;
}

- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;

@end
