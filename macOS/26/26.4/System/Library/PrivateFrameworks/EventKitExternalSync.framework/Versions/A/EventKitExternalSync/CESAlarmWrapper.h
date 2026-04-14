@class EKEvent;

@interface CESAlarmWrapper : CESObjectWrapper

@property (retain) EKEvent *event;

- (id)action;
- (BOOL)save;
- (id)recordID;
- (void).cxx_destruct;
- (id)alarm;
- (BOOL)deleteEKObject;
- (void)fillSyncDict;
- (BOOL)keepFromServer;
- (BOOL)modifyUsingSyncData:(id)a0 record:(id)a1;

@end
