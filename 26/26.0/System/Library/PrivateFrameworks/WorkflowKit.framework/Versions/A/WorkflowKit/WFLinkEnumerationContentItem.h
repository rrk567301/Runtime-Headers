@class WFObjectType, NSString, NSDictionary, LNEnumMetadata, WFFileType, LNEnumCaseMetadata, WFLinkEnumerationCase;

@interface WFLinkEnumerationContentItem : WFContentItem <WFContentItemClass>

@property (class, readonly, nonatomic) LNEnumMetadata *enumMetadata;
@property (class, readonly, nonatomic) NSString *appBundleIdentifier;

@property (retain, nonatomic) LNEnumCaseMetadata *enumCaseMetadata;
@property (readonly, nonatomic) WFLinkEnumerationCase *enumCase;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)_localizedTypeDescriptionWithContext:(id)a0 pluralizationNumber:(long long)a1;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (id)name;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)classForCopying;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
