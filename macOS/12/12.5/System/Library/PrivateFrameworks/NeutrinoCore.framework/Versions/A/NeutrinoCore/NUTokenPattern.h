@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)initWithToken:(id)a0;
- (id)tokens;
- (id)optimizedPattern;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (BOOL)isEqualToPattern:(id)a0;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (BOOL)isEqualToTokenPattern:(id)a0;

@end
