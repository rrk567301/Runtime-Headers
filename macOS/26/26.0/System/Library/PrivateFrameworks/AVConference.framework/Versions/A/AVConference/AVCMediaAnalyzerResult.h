@class NSDictionary;

@interface AVCMediaAnalyzerResult : NSObject

@property (readonly, nonatomic) long long analysisType;
@property (readonly, nonatomic) double analysisStartTimestamp;
@property (readonly, nonatomic) double analysisDuration;
@property (readonly, nonatomic) NSDictionary *analysisResult;

- (void)dealloc;
- (id)initWithInternalResult:(id)a0 analysisType:(long long)a1;

@end
