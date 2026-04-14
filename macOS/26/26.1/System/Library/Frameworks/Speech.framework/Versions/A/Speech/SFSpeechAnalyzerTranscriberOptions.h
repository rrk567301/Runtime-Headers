@class SFTranscriberModelOptions, SFTranscriberReportingOptions, NSLocale;

@interface SFSpeechAnalyzerTranscriberOptions : NSObject

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) long long taskHint;
@property (copy, nonatomic) SFTranscriberModelOptions *modelOptions;
@property (nonatomic) unsigned long long transcriptionOptions;
@property (copy, nonatomic) SFTranscriberReportingOptions *reportingOptions;

- (void).cxx_destruct;
- (id)init;

@end
