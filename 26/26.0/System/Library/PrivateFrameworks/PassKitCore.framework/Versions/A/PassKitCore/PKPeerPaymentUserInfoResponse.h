@class PKPeerPaymentUserInfo;

@interface PKPeerPaymentUserInfoResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) PKPeerPaymentUserInfo *userInfo;

+ (BOOL)jsonDataOptional;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
