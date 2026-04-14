@interface PDFAccessibilityNodeTableColumn : PDFAccessibilityNode

@property (nonatomic) long long index;

- (id)description;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (void)addChild:(id)a0;
- (id)accessibilityRole;
- (long long)accessibilityIndex;
- (id)initWithParent:(id)a0 index:(long long)a1;

@end
