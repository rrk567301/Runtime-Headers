@class NSDictionary, NSArray, NSString;

@interface WFContentAttributionSet : NSObject <NSSecureCoding, WFSerializableContent>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *wfSerializedRepresentationWithPrivateItemIdentifiers;
@property (readonly, copy, nonatomic) NSArray *attributions;
@property (readonly, nonatomic) unsigned long long derivedDisclosureLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionSetWithAttributions:(id)a0;
+ (id)attributionSetByMergingAttributionSets:(id)a0;
+ (id)attributionSetWithAccountBasedAppDescriptor:(id)a0 accountIdentifier:(id)a1 disclosureLevel:(unsigned long long)a2 originalItemIdentifier:(id)a3;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithAppDescriptor:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)attributionSetWithAttributions:(id)a0 shouldReduceAttributions:(char)a1;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 disclosureWarnings:(id)a2 originalItemIdentifier:(id)a3;
+ (id)attributionSetWithOrigin:(id)a0 disclosureLevel:(unsigned long long)a1 originalItemIdentifier:(id)a2;
+ (id)combiningAttributions:(id)a0 withAttributions:(id)a1;
+ (id)compactAttributionsFrom:(id)a0 disclosureLevel:(unsigned long long)a1;
+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)reducedAttributionsFrom:(id)a0;
+ (id)shortcutsAppAttributionSet;
+ (id)shortcutsAppAttributionSetWithDisclosureLevel:(unsigned long long)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttribution:(id)a0;
- (id)allOrigins;
- (id)attributionSetByFilteringNeighborsOfContentItem:(id)a0;
- (id)attributionSetByReplacingAccountWithAppOrigins;
- (unsigned long long)derivedManagedLevel;
- (id)initWithAttributions:(id)a0;
- (char)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)a0;
- (char)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0;
- (char)isEligibleToShareWithResultManagedLevel:(unsigned long long *)a0 usingManagedConfigurationManager:(id)a1;
- (char)isMoreRestrictiveThan:(id)a0;
- (char)isSupersetOfAttributionSet:(id)a0;
- (id)wfSerializedRepresentation;

@end
