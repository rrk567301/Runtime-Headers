@class EKEvent;

@interface WFCalendarEventContentItem : WFCalendarItemContentItem

@property (readonly, nonatomic) EKEvent *event;

+ (id)typeDescription;
+ (id)ownedTypes;
+ (void)runQuery:(id)a0 withItems:(id)a1 completionHandler:(id /* block */)a2;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (id)pluralTypeDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (id)countDescription;
+ (BOOL)hasLibrary;
+ (id)dateByApplyingComponents:(id)a0 toDateComponents:(id)a1;
+ (id)itemWithEKEvent:(id)a0 fromEventStore:(id)a1;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)changeTransaction;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListAltText:(id /* block */)a0;

@end
