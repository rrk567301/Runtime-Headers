@class EKEvent;

@interface CESAlarmWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

- (void).cxx_destruct;
- (id)action;
- (BOOL)save;
- (id)recordID;
- (id)alarm;
- (void)fillSyncDict;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;
- (BOOL)deleteEKObject;
- (BOOL)keepFromServer;

@end
