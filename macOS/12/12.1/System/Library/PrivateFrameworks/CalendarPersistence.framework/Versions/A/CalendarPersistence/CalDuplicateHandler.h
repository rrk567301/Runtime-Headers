@interface CalDuplicateHandler : NSObject

+ (void)deleteDuplicateItems:(id)a0;
+ (id)handleDuplicateEventsAndReturnUniqueMasters:(id)a0;
+ (id)handleDuplicateEventsAndReturnUniques:(id)a0;
+ (id)duplicateHelper:(id)a0 objectsToDelete:(id)a1 clearCTagsForPrincipals:(id)a2 cameFromMultipleCalendars:(BOOL)a3;
+ (void)deleteDuplicateItems:(id)a0 clearCTagsForPrincipals:(id)a1;
+ (void)_clearCTagsForPrincipals:(id)a0;

@end
