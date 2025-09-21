@class NSString, NSDictionary, REMStore, REMReminder, WFFileType, WFObjectType;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) REMReminder *reminder;
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

+ (id)defaultList;
+ (id)allLists;
+ (id)contactRepresentationWithContact:(id)a0;
+ (id)contentCategories;
+ (id)countDescription;
+ (char)hasLibrary;
+ (id)itemWithReminder:(id)a0 fromReminderStore:(id)a1;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)stringConversionBehavior;
+ (char)supportedTypeMustBeDeterminedByInstance:(id)a0;

- (void).cxx_destruct;
- (id)URL;
- (char)hasAlarms;
- (char)flagged;
- (id)imageAttachments;
- (id)parentReminder;
- (id)defaultSourceForRepresentation:(id)a0;
- (char)getListAltText:(id /* block */)a0;
- (char)canGenerateRepresentationForType:(id)a0;
- (id)changeTransaction;
- (void)copyStateToItem:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (char)hasSubtasks;
- (id)subtasks;

@end
