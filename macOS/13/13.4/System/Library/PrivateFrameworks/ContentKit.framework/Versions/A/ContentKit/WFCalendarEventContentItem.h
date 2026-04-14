@class EKEvent, NSString, EKEventStore;

@interface WFCalendarEventContentItem : WFGenericFileContentItem

@property (retain, nonatomic) EKEventStore *eventStore;
@property (readonly, nonatomic) EKEvent *event;
@property (readonly, nonatomic) NSString *location;

+ (id)typeDescription;
+ (id)itemWithEKEvent:(id)a0 fromEventStore:(id)a1;
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)dateByApplyingComponents:(id)a0 toDateComponents:(id)a1;
+ (id)filterDescription;
+ (BOOL)hasLibrary;
+ (id)icsCoercionHandler;
+ (id)mapItemCoercionHandler;
+ (id)mapsLinkCoercionHandler;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)participantsCoercionHandler;
+ (id)placemarkCoercionHandler;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)streetAddressCoercionHandler;
+ (id)stringConversionBehavior;

- (void).cxx_destruct;
- (id)attachments;
- (id)color;
- (id)structuredLocation;
- (id)isCanceled;
- (id)myStatus;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (id)changeTransaction;
- (void)copyStateToItem:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (void)getMapItemRepresentationIfPresent:(id /* block */)a0;

@end
