@class PKPassEntitlement, NSString, NSDictionary, NSNumber, PKPassSharedEntitlement;

@interface PKDisplayablePassEntitlement : NSObject <NSSecureCoding, NSCopying> {
    NSString *_entitlementTemplate;
    NSDictionary *_templateFields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localizedSubtitle;
@property (retain, nonatomic) NSString *localizedGroup;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic) long long groupPriority;
@property (nonatomic) BOOL clearGroupWhenSelected;
@property (readonly, nonatomic) NSString *entitlementIdentifier;
@property (readonly, nonatomic) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly, nonatomic) PKPassEntitlement *entitlement;

+ (id)localizedEntitlementFromCarKeySharedEntitlement:(id)a0;
+ (void)localizedEntitlementsFromEntitlements:(id)a0 pass:(id)a1 useCachedTemplates:(BOOL)a2 completion:(id /* block */)a3;
+ (void)localizedEntitlementsFromDisplayableEntitlements:(id)a0 pass:(id)a1 useCachedTemplates:(BOOL)a2 completion:(id /* block */)a3;
+ (id)localizedEntitlementFromCarKeyEntitlement:(id)a0 pass:(id)a1;
+ (id)localizedEntitlementsFromDisplayableEntitlements:(id)a0 pass:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)replaceEntitlementWithSharedEntitlement:(id)a0;
- (void)replaceSharedEntitlementWithEntitlement:(id)a0;

@end
