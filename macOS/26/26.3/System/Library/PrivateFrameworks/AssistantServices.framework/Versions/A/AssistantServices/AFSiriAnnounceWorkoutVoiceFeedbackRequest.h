@class AFSiriWorkoutVoiceFeedback;

@interface AFSiriAnnounceWorkoutVoiceFeedbackRequest : NSObject <AFSiriExternalRequest> {
    AFSiriWorkoutVoiceFeedback *_workoutVoiceFeedback;
}

+ (void)deactivateRequestForFeedbackIdentifier:(id)a0 completion:(id /* block */)a1;

- (void)performRequestWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithVoiceFeedbackData:(id)a0;
- (id)initWithWorkoutVoiceFeedback:(id)a0;

@end
