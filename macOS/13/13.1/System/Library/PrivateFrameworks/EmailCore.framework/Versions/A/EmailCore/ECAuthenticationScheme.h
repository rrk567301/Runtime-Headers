@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (readonly, nonatomic) BOOL hasEncryption;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *humanReadableName;

+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)a0;
+ (id)schemeWithName:(id)a0;
+ (id)authenticationSchemesForAccount:(id)a0 connection:(id)a1;

- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)a0;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;

@end
