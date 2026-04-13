@class NSUUID, NSString, NSDictionary, NSDate, TIKeyboardSecureCandidateRenderer;

@interface TIAppAutofillManager : NSObject {
    TIKeyboardSecureCandidateRenderer *_secureCandidateRenderer;
}

@property (retain, nonatomic) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastAutofillGeneration;
@property (retain, nonatomic) NSString *clientIdentifierForLastKeyboardSync;
@property (retain, nonatomic) NSDictionary *queuedCustomInfo;
@property (retain, nonatomic) NSDictionary *queuedUnauthenticatedCustomInfo;
@property (retain, nonatomic) NSDate *dateOfLastPasswordAutoFill;
@property (copy, nonatomic) NSString *lastAutofilledUsername;
@property (readonly, nonatomic) TIKeyboardSecureCandidateRenderer *secureCandidateRenderer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)reset;
- (id)initPrivate;
- (void)obtainCredential:(id)a0;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)a0;
- (BOOL)isValidedString:(id)a0;
- (id)customInfoFromCredential:(id)a0;
- (BOOL)_simulatesAutofillCandidates;
- (id)obtainApplicationIdentifierFromConnection:(id)a0;
- (id)obtainBundleIdentifierFromConnection:(id)a0;
- (id)generateAutofillFormCandidatesWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (id)generateAutofillFormSuggestedUsernameWithRenderTraits:(id)a0 withKeyboardState:(id)a1;
- (BOOL)shouldAuthenticateToAcceptAutofill;
- (void)shouldAcceptAutofill:(id)a0 withPayload:(id)a1 completion:(id /* block */)a2;
- (void)shouldAcceptOneTimeCode:(id)a0 completion:(id /* block */)a1;

@end
