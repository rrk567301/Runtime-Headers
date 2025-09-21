@interface CTXPCGetIsNetworkReselectionNeededResponse : CTXPCResponseMessage

@property (readonly, nonatomic) char needsReselection;

+ (id)allowedClassesForArguments;

- (id)initWithNeedsReselection:(char)a0;

@end
