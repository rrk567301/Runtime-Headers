@class CTLazuliCapabilitiesInformation;

@interface CTXPCReadCachedCapabilitiesResponse : CTXPCResponseMessage

@property (readonly, nonatomic) CTLazuliCapabilitiesInformation *capabilitiesInfo;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithCapabilitiesInfo:(id)a0;

@end
