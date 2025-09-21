@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) char success;
@property (readonly, copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
