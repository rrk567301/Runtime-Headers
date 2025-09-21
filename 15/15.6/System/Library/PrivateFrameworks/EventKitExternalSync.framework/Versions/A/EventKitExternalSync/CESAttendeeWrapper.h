@class EKEvent;

@interface CESAttendeeWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

- (void).cxx_destruct;
- (char)save;
- (id)attendee;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;
- (long long)participantRoleFromString:(id)a0;
- (long long)participantStatusFromString:(id)a0;
- (long long)participantTypeFromString:(id)a0;
- (id)stringFromParticipantRole:(long long)a0;
- (id)stringFromParticipantStatus:(long long)a0;
- (id)stringFromParticipantType:(long long)a0;

@end
