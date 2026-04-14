@class NSString, NSArray, NSDictionary;

@interface SecureMessagingAgentCore.QueryKeyPackageMessage : FTIDSMessage {
    void /* unknown type, empty encoding */ recipients;
    void /* unknown type, empty encoding */ userDefaults;
    void /* unknown type, empty encoding */ pushTokenForHeader;
    void /* unknown type, empty encoding */ pushTokenForTesting;
}

@property (nonatomic, readonly) NSString *bagKey;
@property (nonatomic, readonly) NSArray *requiredKeys;
@property (nonatomic, readonly) NSDictionary *messageBody;
@property (nonatomic) BOOL wantsPushSignatures;
@property (nonatomic, readonly) NSDictionary *additionalMessageHeaders;

- (void).cxx_destruct;
- (id)init;
- (BOOL)wantsGZip;

@end
