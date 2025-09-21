@interface SFSpeechAnalyzerSpeechDetectorOptions : NSObject

@property (nonatomic) unsigned long long sensitivityLevel;
@property (nonatomic) char reportResults;

- (id)init;
- (id)initWithReportResults:(char)a0;

@end
