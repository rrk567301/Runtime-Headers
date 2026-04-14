@interface CESCalendarWrapper : CESObjectWrapper

+ (BOOL)keepCalendarFromServer:(id)a0;

- (id)type;
- (id)calendar;
- (BOOL)save;
- (void)fillSyncDict;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (BOOL)deleteEKObject;
- (BOOL)keepFromServer;
- (id)uniqueCalendarName;

@end
