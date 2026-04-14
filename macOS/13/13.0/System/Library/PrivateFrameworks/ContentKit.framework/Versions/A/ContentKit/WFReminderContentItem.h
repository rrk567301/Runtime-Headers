@class NSString, NSDictionary, REMStore, REMReminder, WFFileType, WFObjectType;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) REMReminder *reminder;
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

+ (id)typeDescription;
+ (id)defaultList;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)outputTypes;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (BOOL)hasLibrary;
+ (id)itemWithReminder:(id)a0 fromReminderStore:(id)a1;
+ (id)allLists;
+ (id)contactRepresentationWithContact:(id)a0;

- (void).cxx_destruct;
- (id)URL;
- (BOOL)hasAlarms;
- (BOOL)flagged;
- (id)imageAttachments;
- (id)parentReminder;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (void)copyStateToItem:(id)a0;
- (id)changeTransaction;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)hasSubtasks;
- (id)subtasks;

@end
