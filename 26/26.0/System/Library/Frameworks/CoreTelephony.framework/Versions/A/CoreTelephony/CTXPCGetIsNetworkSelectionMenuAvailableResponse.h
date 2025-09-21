@interface CTXPCGetIsNetworkSelectionMenuAvailableResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL available;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithIsAvailable:(BOOL)a0;

@end
