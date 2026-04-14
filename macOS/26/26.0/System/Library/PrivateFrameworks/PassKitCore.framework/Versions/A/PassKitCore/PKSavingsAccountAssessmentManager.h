@interface PKSavingsAccountAssessmentManager : NSObject {
    long long _type;
}

- (id)initWithType:(long long)a0;
- (long long)type;
- (void)provideSessionFeedbackDiscarded;
- (void)provideSessionFeedbackIngested;
- (void)updateAssessmentType:(long long)a0;
- (void)waitForAssessmentWithCompletion:(id /* block */)a0;

@end
