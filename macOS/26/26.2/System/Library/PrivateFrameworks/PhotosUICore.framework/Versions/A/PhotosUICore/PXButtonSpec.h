@class NSColor;

@interface PXButtonSpec : PXLabelSpec

@property (copy, nonatomic) NSColor *highlightedTextColor;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
