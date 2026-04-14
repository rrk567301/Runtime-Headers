@class NSSet;

@interface ICNFMCAuthScheme : NSObject

@property (readonly, copy) NSSet *supportedSaslMechanisms;
@property (readonly, nonatomic) BOOL requiresUsername;
@property (readonly, nonatomic) BOOL requiresPassword;

+ (id)schemeWithName:(id)a0;
+ (id)knownSchemes;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)schemeWithApplescriptScheme:(unsigned int)a0;
+ (id)schemeWithAccountInfo:(id)a0;

@end
