@class EKObjectPersistentChangesModel, NSMutableArray;

@interface EKPersistentHistoryTransactionChangeSummaryModel : NSObject

@property (retain, nonatomic) NSMutableArray *updatedProperties;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *calendarItems;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *calendars;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *accounts;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *notifications;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *attendees;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *attachments;
@property (readonly, nonatomic) EKObjectPersistentChangesModel *comments;

- (id)init;
- (void).cxx_destruct;
- (id)_getChangeModelForObjectID:(id)a0;
- (id)_getNSSetForTypeOfModification:(unsigned long long)a0 withObjectChangeModel:(id)a1;
- (BOOL)_entityIsPrincipalOrCalendar:(id)a0;
- (void)addRelevantObjectID:(id)a0 withModificationType:(unsigned long long)a1;
- (void)addPropertyWithName:(id)a0 onEntity:(id)a1;
- (void)addRelevantObjectIDs:(id)a0 withModificationType:(unsigned long long)a1;

@end
