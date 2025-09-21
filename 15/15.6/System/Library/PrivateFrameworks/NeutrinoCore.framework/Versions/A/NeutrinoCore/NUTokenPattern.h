@class NSString;

@interface NUTokenPattern : NUPattern

@property (readonly) NSString *token;

- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)tokens;
- (id)initWithToken:(id)a0;
- (char)isEqualToPattern:(id)a0;
- (char)isEqualToTokenPattern:(id)a0;
- (char)isFixedOrder;
- (char)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
