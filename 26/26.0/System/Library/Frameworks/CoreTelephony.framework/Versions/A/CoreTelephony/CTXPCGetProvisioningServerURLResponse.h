@class NSString;

@interface CTXPCGetProvisioningServerURLResponse : CTXPCResponseMessage

@property (readonly, nonatomic) NSString *url;

- (id)ct_shortName;
- (id)initWithURL:(id)a0;

@end
