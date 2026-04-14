@class SRUIFSpeechRecognitionHypothesis, NSArray, NSString;

@interface SiriSharedUISAEUserUtteranceViewModel : NSObject {
    void /* function */ asrAlternatives;
    void /* function */ latencySummary;
    void /* function */ taskIdentifier;
}

@property (nonatomic, retain) SRUIFSpeechRecognitionHypothesis *speech;
@property (nonatomic, copy) NSArray *asrAlternatives;
@property (nonatomic, copy) NSString *latencySummary;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic, copy) NSString *taskIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSpeech:(id)a0 asrAlternatives:(id)a1 latencySummary:(id)a2 shouldShow:(BOOL)a3 taskIdentifier:(id)a4;

@end
