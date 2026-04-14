@class NSString;

@interface FeedbackCore.FBKTargetedSurvey : NSObject {
    void /* function */ identifier;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long teamId;

+ (void)clearCachedUserSession;
+ (void)didFinishSubmissionWithFormIdentifier:(id)a0 feedbackId:(id)a1 isSurvey:(BOOL)a2 error:(id)a3;
+ (id)inboxTargetedSurveysWithTeamType:(unsigned long long)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
