@interface NUEmptyPattern : NUPattern

- (char)isEmpty;
- (id)stringRepresentation;
- (id)tokens;
- (char)isEqualToPattern:(id)a0;
- (char)isFixedOrder;
- (char)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
