@class EKEvent;

@interface CESAlarmWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

- (void).cxx_destruct;
- (char)save;
- (id)action;
- (id)recordID;
- (id)alarm;
- (char)deleteEKObject;
- (void)fillSyncDict;
- (char)keepFromServer;
- (char)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
