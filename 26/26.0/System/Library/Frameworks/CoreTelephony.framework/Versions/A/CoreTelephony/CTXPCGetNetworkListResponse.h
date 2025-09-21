@class CTNetworkList;

@interface CTXPCGetNetworkListResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTNetworkList *networks;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithNetworkList:(id)a0;

@end
