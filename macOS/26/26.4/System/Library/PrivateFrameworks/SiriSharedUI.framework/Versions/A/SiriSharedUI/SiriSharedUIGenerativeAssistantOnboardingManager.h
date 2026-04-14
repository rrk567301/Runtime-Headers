@class _TtC27GenerativeAssistantSettings43GenerativeAssistantEnablementViewController, _TtC12SiriSharedUI47SiriSharedUIGenerativeAssistantOnboardingWindow;

@interface SiriSharedUIGenerativeAssistantOnboardingManager : NSObject

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) _TtC27GenerativeAssistantSettings43GenerativeAssistantEnablementViewController *viewController;
@property (nonatomic, retain) _TtC12SiriSharedUI47SiriSharedUIGenerativeAssistantOnboardingWindow *window;

+ (id)modelName;
+ (id)symbolName;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)presentOnboardingFlowForCommand:(id)a0;
- (void)presentOnboardingFlow;

@end
