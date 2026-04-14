@class NSArray;

@interface EMTAlignmentResult : NSObject

@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) NSArray *hardAlignment;
@property (readonly, nonatomic) NSArray *softAlignment;

- (void).cxx_destruct;
- (id)description;
- (id)initWithScore:(float)a0 hardAlignment:(id)a1 softAlignment:(id)a2;

@end
