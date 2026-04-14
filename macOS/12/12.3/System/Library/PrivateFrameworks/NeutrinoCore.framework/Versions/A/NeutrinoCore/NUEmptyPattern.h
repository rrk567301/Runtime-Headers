@interface NUEmptyPattern : NUPattern

- (BOOL)isEmpty;
- (id)stringRepresentation;
- (id)tokens;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (id)shortestMatch;
- (BOOL)isFixedOrder;

@end
