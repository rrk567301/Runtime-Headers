@class TIKeyboardSecureCandidateRenderer, NSUUID, NSString, SFAppAutoFillPasskeyProvider, NSDate, NSObject, TICredentialCustomInfo;
@protocol OS_dispatch_queue;

@interface TIAppAutofillManager : NSObject <TIAppAutofillManaging> {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *privateQueue;
@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync;
@property (retain, nonatomic) TICredentialCustomInfo *queuedCustomInfo;
@property (retain, nonatomic) TICredentialCustomInfo *queuedUnauthenticatedCustomInfo;
@property (retain, nonatomic) NSDate *dateOfLastPasswordAutoFill;
@property (copy, nonatomic) NSString *lastAutofilledUsername;
@property (readonly, nonatomic) SFAppAutoFillPasskeyProvider *passkeyProvider;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (BOOL)_simulatesAutofillCandidates;
+ (void)setSharedAppAutofillManager:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (id)initPrivate;
- (id)customInfoFromCredential:(id)a0;
- (void)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completion:(id /* block */)a2;
- (void)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)hasAutofillContextEntitlementForConnection:(id)a0;
- (BOOL)isValidedString:(id)a0;
- (void)obtainCredential:(id)a0;
- (void)presentHideMyEmailUI:(id)a0 keyboardState:(id)a1 completion:(id /* block */)a2;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldAuthenticateToAcceptAutofill;

@end
