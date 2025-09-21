@interface TFFeedbackFormBuilder : NSObject

- (id)_buildEmailGroupWithDeveloperName:(id)a0 prefilledEmail:(id)a1;
- (id)_buildUserFeedbackGroupWithContext:(unsigned long long)a0 hasScreenshots:(char)a1;
- (id)_feedbackCommentPlaceholderStringForContext:(unsigned long long)a0;
- (id)buildFormForContext:(unsigned long long)a0 withDeveloperName:(id)a1 prefilledEmail:(id)a2 hasScreenshots:(char)a3;

@end
