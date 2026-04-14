@class PKCreditAccountUserInfo;

@interface PKCreditAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKCreditAccountUserInfo *userInfo;

+ (BOOL)jsonDataOptional;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)_stringValueFromDictionary:(id)a0 key:(id)a1 isOptional:(BOOL)a2;

@end
