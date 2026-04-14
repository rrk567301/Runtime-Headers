@class NSDictionary, NSArray, NSString;

@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *wfSerializedRepresentationWithPrivateItemIdentifiers;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) unsigned long long derivedDisclosureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)reducedAttributionsFrom:(id)a0;
+ (id)compactAttributionsFrom:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithAttributions:(id)a0;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithAccountBasedAppDescriptor:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 originalItemIdentifier:(id)a3;
+ (id)attributionSetByMergingAttributionSets:(id)a0;
+ (id)shortcutsAppAttributionSet;
+ (id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)a0;
+ (id)combiningAttributions:(id)a0 withAttributions:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttribution:(id)a0;
- (id)wfSerializedRepresentation;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0 usingManagedConfigurationManager:(id)a1;
- (id)initWithAttributions:(id)a0;
- (BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)a0;
- (BOOL)isSupersetOfAttributionSet:(id)a0;
- (BOOL)isMoreRestrictiveThan:(id)a0;
- (BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0;
- (unsigned long long)derivedManagedLevel;
- (id)allOrigins;
- (id)attributionSetByReplacingAccountWithAppOrigins;
- (id)attributionSetByFilteringNeighborsOfContentItem:(id)a0;

@end
