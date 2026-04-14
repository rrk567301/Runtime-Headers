@class NSArray;

@interface SFSpeechAnalyzerLanguageDetectorOptions : NSObject

@property (copy, nonatomic) NSArray *languageConstraints;
@property (nonatomic) unsigned long long alternativeCount;
@property (readonly, nonatomic) unsigned long long resultReportingFrequency;
@property (nonatomic) BOOL useVAD;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResultReportingFrequency:(unsigned long long)a0;

@end
