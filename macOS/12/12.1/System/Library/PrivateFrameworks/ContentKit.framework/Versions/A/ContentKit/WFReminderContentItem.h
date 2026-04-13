@class REMReminder, REMStore;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (retain, nonatomic) REMStore *reminderStore;
@property (readonly, nonatomic) REMReminder *reminder;

+ (id)typeDescription;
+ (id)defaultList;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)stringConversionBehavior;
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
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)copyStateToItem:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)changeTransaction;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)hasSubtasks;
- (id)subtasks;

@end
