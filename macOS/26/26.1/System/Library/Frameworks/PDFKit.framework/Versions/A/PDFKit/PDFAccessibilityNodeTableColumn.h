@interface PDFAccessibilityNodeTableColumn : PDFAccessibilityNode

@property (nonatomic) long long index;

- (id)accessibilityRole;
- (id)description;
- (void)addChild:(id)a0;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (long long)accessibilityIndex;
- (id)initWithParent:(id)a0 index:(long long)a1;

@end
