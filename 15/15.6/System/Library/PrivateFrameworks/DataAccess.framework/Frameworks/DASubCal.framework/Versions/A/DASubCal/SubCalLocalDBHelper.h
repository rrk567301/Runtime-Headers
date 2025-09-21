@interface SubCalLocalDBHelper : NSObject

+ (id)_existingCalendarInCalDAVSourceWithExternalID:(id)a0 inSource:(id)a1;
+ (id)_makeCalendarWithExternalId:(id)a0 inStore:(id)a1 error:(id *)a2;
+ (id)_relativePathFromCalDAVExternalID:(id)a0;
+ (void)_setEventStoreProvider:(id)a0;
+ (char)_updateConstraintsIfNecessaryForSource:(id)a0;
+ (id)eventStoreWithClientId:(id)a0;
+ (id)initializeCalendarWithExternalId:(id)a0 inSource:(id)a1 needsSave:(char *)a2 error:(id *)a3;
+ (id)initializeSourceWithExternalId:(id)a0 inStore:(id)a1 needsSave:(char *)a2 error:(id *)a3;

@end
