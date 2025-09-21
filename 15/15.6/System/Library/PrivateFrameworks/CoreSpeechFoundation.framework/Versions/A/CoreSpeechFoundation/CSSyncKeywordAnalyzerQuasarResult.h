@interface CSSyncKeywordAnalyzerQuasarResult : NSObject

@property (nonatomic) double triggerConfidence;
@property (nonatomic) char isValidResult;

- (id)description;
- (id)initWithConfidence:(double)a0;
- (id)initWithDefaultConfidence;

@end
