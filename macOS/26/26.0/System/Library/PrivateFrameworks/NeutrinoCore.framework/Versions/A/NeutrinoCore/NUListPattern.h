@class NSArray;

@interface NUListPattern : NUPattern

@property (readonly) NSArray *list;

- (id)stringRepresentation;
- (id)tokens;
- (id)init;
- (id)initWithList:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToListPattern:(id)a0;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
