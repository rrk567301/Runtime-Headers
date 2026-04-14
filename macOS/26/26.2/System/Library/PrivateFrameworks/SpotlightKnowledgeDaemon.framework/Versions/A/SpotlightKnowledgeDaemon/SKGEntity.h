@interface SKGEntity : NSObject

@property (readonly, nonatomic) double score;

- (BOOL)isEqual:(id)a0;
- (void)setScore:(double)a0;
- (id)description;
- (id)initWithScore:(double)a0;

@end
