@class SCSensitivityAnalysis, NSNumber;

@interface SCMADVideoSessionResult : NSObject

@property (readonly) SCSensitivityAnalysis *analysis;
@property (readonly) NSNumber *confidenceScore;

- (void).cxx_destruct;
- (id)initWithAnalysis:(id)a0 confidenceScore:(id)a1;

@end
