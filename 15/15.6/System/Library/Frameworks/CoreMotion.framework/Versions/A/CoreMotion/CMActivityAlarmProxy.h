@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmProxy : NSObject {
    id _internal;
    void *fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    BOOL fAlarmAvailable;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)activityAlarmAvailable;
- (void)listenForActivityAlarm:(id)a0;
- (void)stopListeningForActivityAlarm:(id)a0;

@end
