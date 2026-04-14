@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)stringRepresentation;
- (id)init;
- (id)tokens;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isEqualToTokenPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
