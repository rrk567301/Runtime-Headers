@interface CESCalendarWrapper : CESObjectWrapper

+ (char)keepCalendarFromServer:(id)a0;

- (id)calendar;
- (id)type;
- (char)save;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;
- (id)uniqueCalendarName;

@end
