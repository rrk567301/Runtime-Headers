@class WFObjectType, NSString, NSDictionary, LNEnumMetadata, WFFileType, LNEnumCaseMetadata, WFLinkEnumerationCase;

@interface WFLinkEnumerationContentItem : WFContentItem <WFContentItemClass>

@property (class, readonly, nonatomic) LNEnumMetadata *enumMetadata;
@property (class, readonly, nonatomic) NSString *appBundleIdentifier;

@property (retain, nonatomic) LNEnumCaseMetadata *enumCaseMetadata;
@property (readonly, nonatomic) WFLinkEnumerationCase *enumCase;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) char includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) char hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) char cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (id)localizedCountDescriptionWithValue:(long long)a0;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)_localizedTypeDescriptionWithContext:(id)a0 pluralizationNumber:(long long)a1;

- (id)name;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (Class)classForCopying;
- (char)getListSubtitle:(id /* block */)a0;
- (char)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;

@end
