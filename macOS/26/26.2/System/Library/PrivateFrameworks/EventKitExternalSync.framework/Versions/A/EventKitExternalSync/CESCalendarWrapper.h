@interface CESCalendarWrapper : CESObjectWrapper

+ (BOOL)keepCalendarFromServer:(id)a0;

- (id)calendar;
- (BOOL)save;
- (id)type;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (id)uniqueCalendarName;

@end
