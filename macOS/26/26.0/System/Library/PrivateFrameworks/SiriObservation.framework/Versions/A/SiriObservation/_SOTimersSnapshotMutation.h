@class NSString, NSDictionary, NSDate, SOTimersSnapshot;

@interface _SOTimersSnapshotMutation : NSObject <SOTimersSnapshotMutating> {
    SOTimersSnapshot *_base;
    NSDate *_date;
    NSDictionary *_timersByID;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasDate : 1; unsigned char hasTimersByID : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setDate:(id)a0;
- (BOOL)isDirty;
- (id)getDate;
- (void)setTimersByID:(id)a0;
- (id)getTimersByID;
- (void).cxx_destruct;

@end
