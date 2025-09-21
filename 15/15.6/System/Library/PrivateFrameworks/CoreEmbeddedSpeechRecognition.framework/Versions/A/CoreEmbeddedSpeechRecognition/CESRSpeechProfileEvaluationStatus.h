@interface CESRSpeechProfileEvaluationStatus : NSObject {
    _Atomic BOOL _isEvaluationEnabled;
}

+ (id)sharedStatus;

- (char)isEvaluationEnabled;
- (void)setEvaluationEnabled:(char)a0;

@end
