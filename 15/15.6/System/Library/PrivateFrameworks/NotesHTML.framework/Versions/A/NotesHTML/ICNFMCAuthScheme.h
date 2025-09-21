@class NSSet;

@interface ICNFMCAuthScheme : NSObject

@property (readonly, copy) NSSet *supportedSaslMechanisms;
@property (readonly, nonatomic) char requiresUsername;
@property (readonly, nonatomic) char requiresPassword;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)schemeWithName:(id)a0;
+ (id)knownSchemes;
+ (id)schemeWithApplescriptScheme:(unsigned int)a0;
+ (id)schemeWithAccountInfo:(id)a0;

@end
