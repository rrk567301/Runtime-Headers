@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)initWithToken:(id)a0;
- (id)stringRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)tokens;
- (BOOL)isEqualToPattern:(id)a0;
- (BOOL)isEqualToTokenPattern:(id)a0;
- (BOOL)isFixedOrder;
- (BOOL)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
