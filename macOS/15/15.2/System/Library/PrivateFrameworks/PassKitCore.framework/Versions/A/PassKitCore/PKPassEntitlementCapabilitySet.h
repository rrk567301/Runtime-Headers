@class NSString, NSNumber;

@interface PKPassEntitlementCapabilitySet : NSObject <NSCopying>

@property (nonatomic) unsigned long long shareability;
@property (nonatomic) unsigned long long manageability;
@property (nonatomic) unsigned long long visibility;
@property (nonatomic) BOOL intraAccountSharingEnabled;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSNumber *capabilityRoleValue;

+ (id)predefinedSets;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)initWithRole:(id)a0;
- (id)_initWithLocalizationKey:(id)a0 shareability:(unsigned long long)a1 manageability:(unsigned long long)a2 visibility:(unsigned long long)a3;
- (id)initWithIntRole:(unsigned short)a0;
- (id)initWithLocalizedName:(id)a0 shareability:(unsigned long long)a1 manageability:(unsigned long long)a2 visibility:(unsigned long long)a3;

@end
