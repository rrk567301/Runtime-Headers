@class NSString;

@interface CTXPCGetLastKnownMobileCountryCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *mcc;

- (id)ct_shortName;
- (id)initWithLastMcc:(id)a0;

@end
