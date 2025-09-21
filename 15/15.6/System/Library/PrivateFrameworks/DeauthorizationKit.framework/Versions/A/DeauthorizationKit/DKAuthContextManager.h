@class NSData, LAContext;

@interface DKAuthContextManager : NSObject

@property (retain) LAContext *localAuthenticationContext;
@property (readonly) NSData *externalizedData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (char)evaluateContextWithUserID:(id)a0 password:(id)a1 mdmInitiated:(char)a2;
- (char)evaluateContextWithUserID:(id)a0 password:(id)a1 mdmInitiated:(char)a2 bootstrapTokenString:(id)a3;
- (char)stashWithUserID:(id)a0 data:(id)a1;
- (char)stashWithUserID:(id)a0 password:(id)a1;
- (char)stashWithUserID:(id)a0 password:(id)a1 mdmInitiated:(char)a2;

@end
