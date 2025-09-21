@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (readonly, nonatomic) char hasEncryption;
@property (readonly, nonatomic) char requiresPassword;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *humanReadableName;

+ (void)initialize;
+ (id)schemeWithName:(id)a0;
+ (id)authenticationSchemesForAccount:(id)a0 connection:(id)a1;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)a0;

- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)a0;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (char)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;

@end
