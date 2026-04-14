@class SFSpeechAnalyzerOptionsPowerContext, SFSpeechAnalyzerOptionsLoggingInfo;

@interface SFSpeechAnalyzerOptions : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL highPriority;
@property (readonly, copy, nonatomic) SFSpeechAnalyzerOptionsLoggingInfo *loggingInfo;
@property (readonly, copy, nonatomic) SFSpeechAnalyzerOptionsPowerContext *powerContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithHighPriority:(BOOL)a0 loggingInfo:(id)a1 powerContext:(id)a2;

@end
