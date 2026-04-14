@interface SKGEntity : NSObject

@property (readonly, nonatomic) double score;

- (void)setScore:(double)a0;
- (id)description;
- (id)initWithScore:(double)a0;
- (BOOL)isEqual:(id)a0;

@end
