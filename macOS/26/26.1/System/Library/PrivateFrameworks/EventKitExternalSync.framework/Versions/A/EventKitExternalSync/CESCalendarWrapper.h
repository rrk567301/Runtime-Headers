@interface CESCalendarWrapper : CESObjectWrapper

+ (BOOL)keepCalendarFromServer:(id)a0;

- (id)type;
- (id)calendar;
- (BOOL)save;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (id)uniqueCalendarName;

@end
