@class NSString;

@interface SCMLTextModerationLMPrediction : NSObject

@property (copy, nonatomic) NSString *nameP1;
@property (nonatomic) BOOL safe;
@property (nonatomic) float probability;

- (void).cxx_destruct;
- (id)initWithNameP1:(id)a0 safe:(BOOL)a1 probability:(float)a2;

@end
