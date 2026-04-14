@class NSString, NSArray, NSDictionary;

@interface SecureMessagingAgentCore.RegisterKeyPackageRequestMessage : FTIDSMessage {
    void /* unknown type, empty encoding */ telURI;
    void /* unknown type, empty encoding */ keyPackage;
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
@property (nonatomic, readonly) NSDictionary *additionalMessageHeaders;
@property (nonatomic, readonly) NSDictionary *additionalInternalHeaders;

- (void).cxx_destruct;
- (id)init;
- (BOOL)wantsGZip;

@end
