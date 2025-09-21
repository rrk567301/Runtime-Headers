@class _TtC12TextToSpeech12SSMLServices;

@interface TextToSpeech.SSMLServices : NSObject

@property (class, nonatomic, retain) _TtC12TextToSpeech12SSMLServices *shared;

- (id)init;
- (void).cxx_destruct;
- (id)makeProsodySnippetWithString:(id)a0 rate:(id)a1 pitch:(id)a2 volume:(id)a3;
- (id)parseSSMLToPlainText:(id)a0 error:(id *)a1;

@end
