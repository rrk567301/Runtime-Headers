@class SFSpeechAnalyzerOptionsPowerContext, SFSpeechAnalyzerOptionsLoggingInfo;

@interface SFSpeechAnalyzerOptions : NSObject <NSCopying>

@property (readonly, nonatomic) char highPriority;
@property (readonly, nonatomic) unsigned long long modelRetention;
@property (readonly, copy, nonatomic) SFSpeechAnalyzerOptionsLoggingInfo *loggingInfo;
@property (readonly, copy, nonatomic) SFSpeechAnalyzerOptionsPowerContext *powerContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithHighPriority:(char)a0 loggingInfo:(id)a1 powerContext:(id)a2;
- (id)initWithHighPriority:(char)a0 modelRetention:(unsigned long long)a1 loggingInfo:(id)a2 powerContext:(id)a3;

@end
