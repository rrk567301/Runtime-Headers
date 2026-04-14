@class NSString, NSArray, NSDictionary;

@interface SecureMessagingAgentCore.IdentityRequestMessage : FTIDSMessage {
    void /* unknown type, empty encoding */ participantInfo;
    void /* unknown type, empty encoding */ credentialSigningRequest;
    void /* unknown type, empty encoding */ telURI;
    void /* unknown type, empty encoding */ acsSignature;
    void /* unknown type, empty encoding */ pnaToken;
    void /* unknown type, empty encoding */ pnaType;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ pushTokenForHeader;
    void /* unknown type, empty encoding */ pushTokenForTesting;
}

@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (nonatomic, readonly) NSDictionary *messageBody;
@property (nonatomic) BOOL wantsPushSignatures;
@property (nonatomic, readonly) NSDictionary *additionalInternalHeaders;
@property (nonatomic, readonly) NSDictionary *additionalMessageHeaders;

- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsGZip;

@end
