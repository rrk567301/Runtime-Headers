@class NSArray, PKAccount;

@interface PKAccountWebServiceAccountResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccount *account;
@property (readonly, copy, nonatomic) NSArray *physicalCards;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
