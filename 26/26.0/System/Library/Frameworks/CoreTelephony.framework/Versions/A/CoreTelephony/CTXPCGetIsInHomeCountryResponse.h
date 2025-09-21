@interface CTXPCGetIsInHomeCountryResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL isHome;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithIsHome:(BOOL)a0;

@end
