@class SOAPFaultDetail, NSString;

@interface SOAPFault : NSObject <XSDefinitionProvider>

@property (retain, nonatomic) SOAPFaultDetail *detail;
@property (copy, nonatomic) NSString *faultactor;
@property (copy, nonatomic) NSString *faultcode;
@property (copy, nonatomic) NSString *faultstring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)definition;

- (void)setCode:(id)a0;
- (void)setReason:(id)a0;
- (void).cxx_destruct;
- (id)Code;
- (id)Detail;
- (id)Reason;

@end
