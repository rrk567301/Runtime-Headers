@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)initWithToken:(id)a0;
- (id)stringRepresentation;
- (id)tokens;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isEqualToTokenPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
