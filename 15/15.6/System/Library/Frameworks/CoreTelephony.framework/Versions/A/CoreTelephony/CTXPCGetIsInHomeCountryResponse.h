@interface CTXPCGetIsInHomeCountryResponse : CTXPCResponseMessage

@property (readonly, nonatomic) char isHome;

+ (id)allowedClassesForArguments;

- (id)initWithIsHome:(char)a0;

@end
