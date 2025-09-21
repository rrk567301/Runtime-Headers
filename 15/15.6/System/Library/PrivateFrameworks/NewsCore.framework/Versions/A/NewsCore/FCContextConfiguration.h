@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) char isProductionContentEnvironment;
@property (readonly, nonatomic) char isProductionPrivateDataEnvironment;
@property (readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier;
@property (readonly, nonatomic) long long environment;
@property (readonly, copy, nonatomic) NSString *contentContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentDescription;
@property (readonly, copy, nonatomic) NSString *privateDataContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier;

+ (id)defaultConfiguration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEnvironment:(long long)a0;
- (id)initWithProductionContentEnvironment:(char)a0 productionPrivateDataEnvironment:(char)a1 contentContainerIdentifier:(id)a2 privateDataContainerIdentifier:(id)a3 privateDataSecureContainerIdentifier:(id)a4 storeFrontID:(id)a5 environment:(long long)a6;

@end
