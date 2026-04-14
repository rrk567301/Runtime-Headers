@class NSMutableArray;

@interface VMURangeToStringMap : NSObject <NSSecureCoding> {
    NSMutableArray *_strings;
    void *_stringToIndexMapVoidPtr;
    void *_rangeAndStringVectorVoidPtr;
    BOOL _sorted;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned int)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)sort;
- (id)stringForIndex:(unsigned int)a0;
- (unsigned int)uniquedStringCount;
- (void)enumerateHexAddressesInStrings:(id /* block */)a0;
- (unsigned int)indexForString:(id)a0 insertIfMissing:(BOOL)a1;
- (void)setString:(id)a0 forRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a1;
- (id)stringForAddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeContainingAddress:(unsigned long long)a0;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })rangeForString:(id)a0 startingAtAddress:(unsigned long long)a1;
- (void)resymbolicateStringsWithSymbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateRanges:(id /* block */)a0;

@end
