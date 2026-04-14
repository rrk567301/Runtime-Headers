@class NSURLProtectionSpace, NSURLCredential;

@interface WBSCredentialMatch : WBSFormAutoFillItem

@property (readonly, nonatomic) NSURLCredential *credential;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)completion;
- (id)initWithCredential:(id)a0;
- (id)initWithCredential:(id)a0 protectionSpace:(id)a1;

@end
