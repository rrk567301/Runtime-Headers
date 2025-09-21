@interface CTXPCGetSupports5GStandaloneResponse : CTXPCResponseMessage

@property (readonly, nonatomic) char support;

+ (id)allowedClassesForArguments;

- (id)initWithSupport:(char)a0;

@end
