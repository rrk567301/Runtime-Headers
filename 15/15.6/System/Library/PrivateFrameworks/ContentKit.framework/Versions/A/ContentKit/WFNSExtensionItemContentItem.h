@class NSArray, NSDictionary, WFFileType, WFObjectType, NSExtensionItem, NSString;

@interface WFNSExtensionItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) NSArray *extensionSubItems;
@property (readonly, nonatomic) NSExtensionItem *extensionItem;
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

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithObject:(id)a0 sourceAppBundleIdentifier:(id)a1;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (char)supportedTypeMustBeDeterminedByInstance:(id)a0;

@end
