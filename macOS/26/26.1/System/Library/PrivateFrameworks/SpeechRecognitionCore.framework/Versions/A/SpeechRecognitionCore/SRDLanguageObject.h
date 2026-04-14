@class SRDTranscriptionResult;

@interface SRDLanguageObject : NSObject

@property (retain) SRDTranscriptionResult *transcriptionResult;
@property struct __RXLanguageObject { } *languageObject;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithLanguageObject:(struct __RXLanguageObject { } *)a0 transcriptionResult:(id)a1;

@end
