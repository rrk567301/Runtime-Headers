@class NSArray, NSString, SAUIFeedbackForm, SAUIRequestEndBehavior, SASendCommands;

@interface SAUIAddViews : SABaseClientBoundCommand <SAConditionallyMutatingClientBoundCommand>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *coordinationOptions;
@property (copy, nonatomic) NSString *dialogPhase;
@property (copy, nonatomic) NSString *displayTarget;
@property (retain, nonatomic) SAUIFeedbackForm *feedbackForm;
@property (nonatomic) char immersiveExperience;
@property (nonatomic) char mutatingCommand;
@property (copy, nonatomic) NSString *patternId;
@property (copy, nonatomic) NSString *patternType;
@property (nonatomic) char persistentAcrossInvocations;
@property (copy, nonatomic) NSString *personaAccessLevel;
@property (copy, nonatomic) NSString *personaId;
@property (retain, nonatomic) SASendCommands *refreshCommand;
@property (retain, nonatomic) SAUIRequestEndBehavior *requestEndBehavior;
@property (nonatomic) char requiresResponse;
@property (copy, nonatomic) NSString *responseMode;
@property (nonatomic) char scrollToTop;
@property (nonatomic) char supplemental;
@property (nonatomic) char temporary;
@property (copy, nonatomic) NSArray *views;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addViewsWithDictionary:(id)a0 context:(id)a1;
+ (id)addViews;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
