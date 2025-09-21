@interface CTXPCGetRegulatedRATsUserPreferenceResponse : CTXPCResponseMessage

@property (readonly, nonatomic) BOOL enabled;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithIsEnabled:(BOOL)a0;

@end
