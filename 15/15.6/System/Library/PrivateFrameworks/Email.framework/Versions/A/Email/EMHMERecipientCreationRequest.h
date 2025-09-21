@class NSString, ACAccount;

@interface EMHMERecipientCreationRequest : AARequest {
    ACAccount *_account;
    NSString *_recipient;
    NSString *_hmeAddress;
}

+ (id)log;
+ (Class)responseClass;
+ (char)canCreateHMEReplyToAddress:(id)a0;

- (void).cxx_destruct;
- (id)urlString;
- (id)urlRequest;
- (id)_httpBody;
- (id)initWithAccount:(id)a0 recipient:(id)a1 hmeAddress:(id)a2;

@end
