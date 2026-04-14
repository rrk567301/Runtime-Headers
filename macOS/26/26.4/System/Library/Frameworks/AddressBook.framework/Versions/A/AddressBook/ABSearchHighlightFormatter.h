@class NSArray;

@interface ABSearchHighlightFormatter : NSFormatter {
    NSArray *mHighlightStrings;
}

- (id)stringForObjectValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (void)setHighlightStrings:(id)a0;

@end
