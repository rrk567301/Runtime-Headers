@class NSString, PKPaymentCredential;

@interface PKPaymentSetupAssistantCoreCredential : NSObject

@property (readonly, retain, nonatomic) PKPaymentCredential *credential;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSString *subtitle;
@property (readonly, retain, nonatomic) NSString *uniqueIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPaymentPass:(id)a0;
- (id)initWithPaymentCredential:(id)a0;

@end
