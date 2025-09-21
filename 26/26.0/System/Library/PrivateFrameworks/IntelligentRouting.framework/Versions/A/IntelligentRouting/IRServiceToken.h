@class NSString;

@interface IRServiceToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) long long servicePackage;

+ (id)new;
+ (id)_combineServiceIdentifier:(id)a0 withPersonaUniqueIdentifier:(id)a1;
+ (id)_extractServiceIdentifierFromCombinedString:(id)a0;
+ (id)_serviceIdentifiersMapping;
+ (BOOL)isServiceTokenValid:(id)a0 forClientIdentifier:(id)a1;
+ (id)serviceTokenForServiceIdentifier:(id)a0;
+ (id)serviceTokenForServiceIdentifier:(id)a0 personaUniqueIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0 servicePackage:(long long)a1;

@end
