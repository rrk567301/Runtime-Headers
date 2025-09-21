@class NSString;

@interface CTXPCGetMobileCountryCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *mcc;

- (id)ct_shortName;
- (id)initWithMcc:(id)a0;

@end
