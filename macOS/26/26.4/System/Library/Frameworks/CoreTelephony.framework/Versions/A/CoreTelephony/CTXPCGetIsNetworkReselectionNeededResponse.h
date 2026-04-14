@interface CTXPCGetIsNetworkReselectionNeededResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL needsReselection;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithNeedsReselection:(BOOL)a0;

@end
