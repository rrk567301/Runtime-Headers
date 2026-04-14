@class CTLazuliSystemConfiguration;

@interface CTXPCGetSystemConfigResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliSystemConfiguration *config;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithSystemConfiguration:(id)a0;

@end
