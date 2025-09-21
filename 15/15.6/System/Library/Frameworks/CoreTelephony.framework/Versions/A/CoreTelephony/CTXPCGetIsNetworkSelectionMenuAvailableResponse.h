@interface CTXPCGetIsNetworkSelectionMenuAvailableResponse : CTXPCResponseMessage

@property (readonly, nonatomic) char available;

+ (id)allowedClassesForArguments;

- (id)initWithIsAvailable:(char)a0;

@end
