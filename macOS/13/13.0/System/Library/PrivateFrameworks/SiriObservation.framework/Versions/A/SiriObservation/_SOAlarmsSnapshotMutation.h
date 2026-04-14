@class NSString, NSDictionary, NSOrderedSet, NSDate, SOAlarmsSnapshot;

@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating> {
    SOAlarmsSnapshot *_base;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_firingAlarmIDs;
    NSOrderedSet *_dismissedAlarmIDs;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasAlarmsByID : 1; unsigned char hasFiringAlarmIDs : 1; unsigned char hasDismissedAlarmIDs : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setDate:(id)a0;
- (BOOL)isDirty;
- (id)initWithBase:(id)a0;
- (id)getDate;
- (void)setAlarmsByID:(id)a0;
- (id)getAlarmsByID;
- (void)setFiringAlarmIDs:(id)a0;
- (void)setDismissedAlarmIDs:(id)a0;
- (id)getFiringAlarmIDs;
- (id)getDismissedAlarmIDs;

@end
