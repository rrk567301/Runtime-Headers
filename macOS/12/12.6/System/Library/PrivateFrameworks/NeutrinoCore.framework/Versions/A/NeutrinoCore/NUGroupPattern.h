@class NSArray;

@interface NUGroupPattern : NUPattern

@property (readonly) NSArray *group;

- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithGroup:(id)a0;
- (id)tokens;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (BOOL)isEqualToGroupPattern:(id)a0;

@end
