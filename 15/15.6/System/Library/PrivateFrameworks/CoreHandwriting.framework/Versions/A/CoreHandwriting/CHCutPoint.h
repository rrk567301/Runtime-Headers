@interface CHCutPoint : NSObject

@property (readonly, nonatomic) long long strokeIndex;
@property (readonly, nonatomic) long long pointIndex;
@property (readonly, nonatomic) char isEndOfStroke;

+ (id)sortedCHCutPointArray:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (char)isStartOfStroke;
- (id)initWithStrokeIndex:(long long)a0 pointIndex:(long long)a1 isEndOfStroke:(char)a2;

@end
