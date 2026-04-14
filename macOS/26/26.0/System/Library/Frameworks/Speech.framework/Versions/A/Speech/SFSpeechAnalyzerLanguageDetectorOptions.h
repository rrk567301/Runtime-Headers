@class NSArray;

@interface SFSpeechAnalyzerLanguageDetectorOptions : NSObject

@property (copy, nonatomic) NSArray *languageConstraints;
@property (nonatomic) unsigned long long alternativeCount;
@property (readonly, nonatomic) unsigned long long resultReportingFrequency;
@property (nonatomic) BOOL useVAD;

- (id)init;
- (void).cxx_destruct;
- (id)initWithResultReportingFrequency:(unsigned long long)a0;

@end
