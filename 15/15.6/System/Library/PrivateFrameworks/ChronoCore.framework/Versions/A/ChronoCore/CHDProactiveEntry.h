@class NSDate;

@interface CHDProactiveEntry : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) char hasRelevance;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)initWithDate:(id)a0;
- (id)initWithDate:(id)a0 score:(double)a1 duration:(double)a2;

@end
