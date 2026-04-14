@class SRDTranscriptionResult;

@interface SRDLanguageObject : NSObject

@property (retain) SRDTranscriptionResult *transcriptionResult;
@property struct __RXLanguageObject { } *languageObject;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLanguageObject:(struct __RXLanguageObject { } *)a0 transcriptionResult:(id)a1;

@end
