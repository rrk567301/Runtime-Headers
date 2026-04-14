@class NSString, NSArray, NSDictionary;

@interface SecureMessagingAgentCore.DeregisterKeyPackageRequestMessage : FTIDSMessage {
    void /* unknown type, empty encoding */ telURI;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ pushTokenForHeader;
    void /* unknown type, empty encoding */ pushTokenForTesting;
}

@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (nonatomic, readonly) NSDictionary *messageBody;
@property (nonatomic) BOOL wantsPushSignatures;
@property (nonatomic, readonly) NSDictionary *additionalMessageHeaders;

- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsGZip;

@end
