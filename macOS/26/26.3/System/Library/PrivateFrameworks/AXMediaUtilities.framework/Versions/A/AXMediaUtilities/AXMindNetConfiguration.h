@class NSArray, NSNumber;

@interface AXMindNetConfiguration : NSObject

@property (readonly, nonatomic) NSArray *filterThresholds;
@property (readonly, nonatomic) NSNumber *nmsThreshold;

- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end
