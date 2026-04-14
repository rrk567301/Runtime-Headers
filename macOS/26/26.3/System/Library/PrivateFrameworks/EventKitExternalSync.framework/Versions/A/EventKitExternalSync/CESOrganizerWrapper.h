@interface CESOrganizerWrapper : CESAttendeeWrapper

- (id)recordID;
- (id)organizer;
- (id)event;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
