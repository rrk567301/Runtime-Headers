@class SRUIFSpeechRecognitionHypothesis, NSArray, NSString;

@interface SiriSharedUISAEUserUtteranceViewModel : NSObject {
    void /* function */ asrAlternatives;
    void /* function */ latencySummary;
    void /* function */ taskIdentifier;
    void /* function */ associatedLatencyAceObjects;
}

@property (nonatomic, retain) SRUIFSpeechRecognitionHypothesis *speech;
@property (nonatomic, copy) NSArray *asrAlternatives;
@property (nonatomic, copy) NSString *latencySummary;
@property (nonatomic) BOOL shouldShow;
@property (nonatomic, copy) NSString *taskIdentifier;
@property (nonatomic, copy) NSArray *associatedLatencyAceObjects;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) float progress;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSpeech:(id)a0 asrAlternatives:(id)a1 latencySummary:(id)a2 shouldShow:(BOOL)a3 taskIdentifier:(id)a4 associatedLatencyAceObjects:(id)a5 showProgress:(BOOL)a6 progress:(float)a7;
- (id)initWithSpeech:(id)a0 asrAlternatives:(id)a1 latencySummary:(id)a2 shouldShow:(BOOL)a3 taskIdentifier:(id)a4 showProgress:(BOOL)a5 progress:(float)a6;

@end
