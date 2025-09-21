@class CTNetwork;

@interface CTXPCGetNetworkSelectionResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTNetwork *network;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithNetwork:(id)a0;

@end
