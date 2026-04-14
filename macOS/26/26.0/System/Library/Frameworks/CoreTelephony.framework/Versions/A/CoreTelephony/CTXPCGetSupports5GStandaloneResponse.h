@interface CTXPCGetSupports5GStandaloneResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL support;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithSupport:(BOOL)a0;

@end
