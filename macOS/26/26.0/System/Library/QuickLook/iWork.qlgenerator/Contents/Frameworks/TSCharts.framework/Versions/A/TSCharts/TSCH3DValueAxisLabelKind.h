@interface TSCH3DValueAxisLabelKind : TSCH3DAxisLabelKind

+ (id)kind;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count:(id)a0;
- (id)labelForAxis:(id)a0 index:(unsigned long long)a1;
- (double)unitSpaceValueForAxis:(id)a0 index:(unsigned long long)a1;

@end
