@interface CTXPCGet2GUserPreferenceResponse : CTXPCResponseMessage

@property (readonly, nonatomic) char enabled;

+ (id)allowedClassesForArguments;

- (id)initWithIsEnabled:(char)a0;

@end
