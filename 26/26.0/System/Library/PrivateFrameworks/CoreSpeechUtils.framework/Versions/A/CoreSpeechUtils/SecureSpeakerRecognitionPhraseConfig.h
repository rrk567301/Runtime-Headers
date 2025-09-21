@class NSString;

@interface SecureSpeakerRecognitionPhraseConfig : NSObject {
    void /* function */ name;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) float satThreshold;
@property (nonatomic, readonly) float satStrongAcceptThreshold;
@property (nonatomic, readonly) float satStrongRejectThreshold;
@property (nonatomic, readonly) long long multiUserLowScoreThreshold;
@property (nonatomic, readonly) long long multiUserHighScoreThreshold;
@property (nonatomic, readonly) long long multiUserConfidentScoreThreshold;
@property (nonatomic, readonly) long long multiUserDeltaScoreThreshold;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 satThreshold:(float)a1 satStrongAcceptThreshold:(float)a2 satStrongRejectThreshold:(float)a3 multiUserLowScoreThreshold:(long long)a4 multiUserHighScoreThreshold:(long long)a5 multiUserConfidentScoreThreshold:(long long)a6 multiUserDeltaScoreThreshold:(long long)a7;

@end
