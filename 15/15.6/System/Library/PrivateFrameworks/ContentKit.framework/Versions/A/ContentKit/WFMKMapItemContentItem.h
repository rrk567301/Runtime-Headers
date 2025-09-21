@class NSString, NSDictionary, WFFileType, CLLocation, MKMapItem, WFObjectType;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) CLLocation *queryLocation;
@property (readonly, nonatomic) MKMapItem *mapItem;
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
+ (id)itemWithMapItem:(id)a0 fromQueryLocation:(id)a1 origin:(id)a2 disclosureLevel:(unsigned long long)a3;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (char)supportedTypeMustBeDeterminedByInstance:(id)a0;

- (void).cxx_destruct;
- (char)getListAltText:(id /* block */)a0;
- (char)loadsListSubtitleAsynchronously;
- (char)canGenerateRepresentationForType:(id)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (char)getListSubtitle:(id /* block */)a0;
- (unsigned long long)preferredDisplayStyle;

@end
