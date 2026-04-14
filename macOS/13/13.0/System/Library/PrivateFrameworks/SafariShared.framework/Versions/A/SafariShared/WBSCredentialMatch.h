@class NSString, WBSSavedAccount, NSDate, NSURLProtectionSpace;

@interface WBSCredentialMatch : NSObject <WBSFormAutoFillItem>

@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) NSString *completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSavedAccount:(id)a0 protectionSpace:(id)a1;

@end
