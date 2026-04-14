@class NSString;

@interface CTXPCGetMobileNetworkCodeResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *mnc;

- (id)ct_shortName;
- (id)initWithMnc:(id)a0;

@end
