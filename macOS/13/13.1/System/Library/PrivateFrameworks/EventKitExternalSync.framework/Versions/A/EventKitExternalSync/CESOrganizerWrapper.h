@interface CESOrganizerWrapper : CESAttendeeWrapper

- (id)event;
- (id)recordID;
- (id)organizer;
- (void)fillSyncDict;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (BOOL)deleteEKObject;
- (BOOL)keepFromServer;

@end
