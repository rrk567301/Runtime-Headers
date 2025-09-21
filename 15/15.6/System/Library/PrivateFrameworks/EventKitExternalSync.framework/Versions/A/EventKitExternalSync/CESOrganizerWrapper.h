@interface CESOrganizerWrapper : CESAttendeeWrapper

- (id)event;
- (id)recordID;
- (id)organizer;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
