@class NSString;

@interface ECAuthenticationScheme : NSObject

@property (readonly, nonatomic) BOOL hasEncryption;
@property (readonly, nonatomic) BOOL requiresPassword;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *humanReadableName;

+ (void)initialize;
+ (id)schemeWithName:(id)a0;
+ (void)registerSchemeClass:(Class)a0;
+ (id)knownSchemes;
+ (id)authenticationSchemesForAccount:(id)a0 connection:(id)a1;

- (Class)authenticatorClass;
- (Class)connectionClassForAccountClass:(Class)a0;
- (id)authenticatorForAccount:(id)a0 connection:(id)a1;
- (BOOL)canAuthenticateAccountClass:(Class)a0 connection:(id)a1;

@end
