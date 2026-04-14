@interface LNSpotlightCascadeTranslator : NSObject {
    Class _ItemInstanceClass;
    Class _AppIntentsIndexedEntityContentClass;
    Class _AppIntentsIndexedEntityMetaContentClass;
    Class _AppEntityDisplayRepresentationClass;
    Class _AppEntityTypeDisplayRepresentationClass;
    Class _AppleIntelligenceAttributesClass;
    Class _GeneralAttributesClass;
    Class _DocumentAttributesClass;
    Class _UserInvolvementAttributesClass;
    Class _EventAttributesClass;
    Class _MediaAttributesClass;
    Class _PlaceAttributesClass;
    Class _MusicAttributesClass;
    Class _ImageAttributesClass;
    Class _MessageAttributesClass;
    Class _PersonClass;
    Class _EmailHeadersEntryClass;
    Class _ContainmentAttributesClass;
    Class _ActionAttributesClass;
    Class _ItemRepresentationAttributesClass;
    Class _DefinedAttributesClass;
    Class _CustomAttributeClass;
    Class _CustomAttributeKeyClass;
    Class _CustomItemAttributeValueClass;
    BOOL _softLinkedClassesLoaded;
}

+ (id)stringFromAttribute:(id)a0;

- (id)init;
- (BOOL)isAllowedClientBundleIdentifier:(id)a0;
- (id)translateItem:(id)a0 fromBundleId:(id)a1 error:(id *)a2;
- (id)attributeSetForItem:(id)a0;
- (id)createActionAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createAppleIntelligenceAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createContainmentAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createCustomAttribute:(id)a0 multiValued:(BOOL)a1 searchable:(BOOL)a2 searchableByDefault:(BOOL)a3 unique:(BOOL)a4 value:(id)a5 error:(id *)a6;
- (id)createDocumentAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createEventAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createGeneralAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createImageAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createItemRepresentationAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createMediaAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createMessageAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createMusicAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createPlaceAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createSpotlightCustomAttributesFromItem:(id)a0 error:(id *)a1;
- (id)createSpotlightDefinedAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)createUserInvolvementAttributesFromAttributeSet:(id)a0 error:(id *)a1;
- (id)disabledAppEntityTypeIdentifiersForBundleIdentifier:(id)a0;
- (BOOL)isSpotlightInlineDonationCustomAttributesEnabled;
- (BOOL)isSpotlightInlineDonationFullReplicaEnabled;
- (BOOL)softLinkedClassesDidLoad;
- (id)translateCustomAttributeValue:(id)a0 error:(id *)a1;
- (id)translateSpotlightPersonWithAttributeKey:(id)a0 fromAttributeSet:(id)a1 error:(id *)a2;

@end
