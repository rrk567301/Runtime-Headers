@class NSString, NSArray, NSURL, NSDictionary;

@interface SecureMessagingAgentCore.IdentityRequestMessage : FTIDSMessage {
    void /* unknown type, empty encoding */ participantInfo;
    void /* unknown type, empty encoding */ credentialSigningRequest;
    void /* unknown type, empty encoding */ telURI;
    void /* unknown type, empty encoding */ acsSignature;
    void /* unknown type, empty encoding */ pnaToken;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ pushTokenForTesting;
}

@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, copy) NSURL *URLOverride;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (nonatomic, readonly) NSDictionary *messageBody;
@property (nonatomic) BOOL wantsPushSignatures;
@property (nonatomic, readonly) NSDictionary *additionalInternalHeaders;

- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsGZip;

@end
