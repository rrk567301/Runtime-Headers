@class NSString, NSDictionary, CLPlacemark, WFFileType, WFObjectType;

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) CLPlacemark *placemark;
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
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (long long)tableTemplateSubjectType;

- (char)getListAltText:(id /* block */)a0;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 named:(id)a2 withCompletionHandler:(id /* block */)a3;
- (char)loadsListSubtitleAsynchronously;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (char)getListSubtitle:(id /* block */)a0;
- (char)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 completionHandler:(id /* block */)a2;
- (char)loadsListThumbnailAsynchronously;
- (unsigned long long)preferredDisplayStyle;

@end
