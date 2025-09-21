@class SAIntentGroupAceBargeInState, NSString, NSArray, SAIntentGroupSiriKitRemoteExecution, SAIntentGroupSiriKitMetrics, SAIntentGroupSiriKitAppSelectionState, SAIntentGroupSiriKitListPosition, SAPerson, SAIntentGroupParse;

@interface SAIntentGroupRunSiriKitExecutor : SABaseClientBoundCommand <SATurnIdContaining>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) SAIntentGroupSiriKitAppSelectionState *appSelectionState;
@property (retain, nonatomic) SAIntentGroupAceBargeInState *bargeInState;
@property (copy, nonatomic) NSString *confirmationState;
@property (nonatomic) char directAction;
@property (nonatomic) char eyesFree;
@property (copy, nonatomic) NSString *goalID;
@property (retain, nonatomic) SAPerson *identifiedUserMeCard;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSString *interactionType;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) char multiUser;
@property (copy, nonatomic) NSArray *parameterMetadata;
@property (copy, nonatomic) NSArray *parameterPrompts;
@property (copy, nonatomic) NSString *parentGoalID;
@property (retain, nonatomic) SAIntentGroupParse *parse;
@property (retain, nonatomic) SAIntentGroupSiriKitListPosition *readingListPosition;
@property (retain, nonatomic) SAIntentGroupSiriKitRemoteExecution *remoteExecution;
@property (nonatomic) char requiresConditionalMultiUserGrounding;
@property (copy, nonatomic) NSString *sessionHandOffContinuityID;
@property (retain, nonatomic) SAIntentGroupSiriKitMetrics *siriKitMetrics;
@property (nonatomic) char textToSpeechEnabled;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *userInitiatedAction;
@property (copy, nonatomic) NSString *usoVerb;
@property (nonatomic) char voiceTriggerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runSiriKitExecutor;
+ (id)runSiriKitExecutorWithDictionary:(id)a0 context:(id)a1;

@end
