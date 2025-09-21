@class NUPattern;

@interface NURepeatPattern : NUPattern

@property (readonly) NUPattern *pattern;
@property (readonly) long long minCount;
@property (readonly) long long maxCount;

- (id)init;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)tokens;
- (id)initWithPattern:(id)a0 count:(long long)a1;
- (id)initWithPattern:(id)a0 minCount:(long long)a1;
- (id)initWithPattern:(id)a0 minCount:(long long)a1 maxCount:(long long)a2;
- (char)isEqualToPattern:(id)a0;
- (char)isEqualToRepeatPattern:(id)a0;
- (char)isFixedOrder;
- (char)match:(id)a0 location:(unsigned long long *)a1 count:(unsigned long long *)a2;
- (id)optimizedPattern;
- (id)shortestMatch;

@end
