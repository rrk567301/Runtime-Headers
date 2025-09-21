@class NSString, NSDictionary, WFGeneratedResponse, WFFileType, WFObjectType;

@interface WFGeneratedContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFGeneratedResponse *response;
@property (readonly, nonatomic) NSString *textResponse;
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

+ (id)attributedStringCoercionHandler;
+ (id)getConversationHistoryWithItem:(id)a0;
+ (id)getRenderedUserContentWithItem:(id)a0;
+ (id)boolCoercionHandler;
+ (id)coercions;
+ (id)dateCoercionHandler;
+ (id)dictionaryCoercionHandler;
+ (id)getTextResponseWithItem:(id)a0;
+ (id)itemWithResponse:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)numberCoercionHandler;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)textCoercionHandler;

- (void)getSerializedItem:(id /* block */)a0;
- (id)richListTitle;

@end
