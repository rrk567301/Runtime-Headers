@class NSString, CHTranscriptionQuery;

@interface PKTranscriptionQuery : PKQuery

@property (retain, nonatomic) CHTranscriptionQuery *transcriptionQuery;
@property (readonly, nonatomic) NSString *transcription;

- (void)teardown;
- (void)pause;
- (void).cxx_destruct;
- (void)start;
- (void)dealloc;
- (id)contextualTextResultsForContextStrokes:(id)a0 completion:(id /* block */)a1 shouldCancel:(id /* block */)a2;
- (id)initWithRecognitionSessionManager:(id)a0;

@end
