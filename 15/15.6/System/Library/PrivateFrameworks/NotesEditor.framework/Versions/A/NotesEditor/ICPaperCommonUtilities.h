@interface ICPaperCommonUtilities : NSObject

@property (class, nonatomic, readonly) char shouldShowLinksWhenComposingQuickNote;
@property (class, nonatomic, readonly) char shouldResumeLastQuickNote;

+ (id)activitiesToExcludeForNote:(id)a0 currentUserActivity:(id)a1;

- (id)init;

@end
