@class NSString, NSDictionary, WFFileType, WFObjectType, NSNumber;

@interface WFNumberContentItem : WFContentItem <WFContentItemClass>

@property (retain, nonatomic) NSNumber *maximumFractionDigitsForDisplay;
@property (readonly, nonatomic) NSNumber *number;
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
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithNumber:(id)a0 maximumFractionDigitsForDisplay:(id)a1;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (long long)tableTemplateSubjectType;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)copyStateToItem:(id)a0;
- (char)getListSubtitle:(id /* block */)a0;
- (id)roundedName;

@end
