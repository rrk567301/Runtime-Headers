@class NSString;

@interface FCContextConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isProductionContentEnvironment;
@property (readonly, nonatomic) BOOL isProductionPrivateDataEnvironment;
@property (readonly, copy, nonatomic) NSString *privateDataContainerCombinationIdentifier;
@property (readonly, nonatomic) long long environment;
@property (readonly, copy, nonatomic) NSString *contentContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *contentContainerCombinationIdentifier;
@property (readonly, copy, nonatomic) NSString *contentEnvironmentDescription;
@property (readonly, copy, nonatomic) NSString *privateDataContainerIdentifier;
@property (readonly, copy, nonatomic) NSString *privateDataSecureContainerIdentifier;

+ (id)defaultConfiguration;

- (id)initWithEnvironment:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithProductionContentEnvironment:(BOOL)a0 productionPrivateDataEnvironment:(BOOL)a1 contentContainerIdentifier:(id)a2 privateDataContainerIdentifier:(id)a3 privateDataSecureContainerIdentifier:(id)a4 storeFrontID:(id)a5 environment:(long long)a6;
- (void).cxx_destruct;

@end
