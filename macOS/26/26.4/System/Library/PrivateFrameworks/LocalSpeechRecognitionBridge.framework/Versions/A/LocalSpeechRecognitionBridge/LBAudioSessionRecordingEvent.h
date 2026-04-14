@class NSString;

@interface LBAudioSessionRecordingEvent : LBAudioSessionInformEvent

@property (readonly, nonatomic) NSString *bundleId;

- (void).cxx_destruct;
- (id)initWithActionType:(unsigned long long)a0 bundleId:(id)a1;
- (id)initWithActionType:(unsigned long long)a0 timestamp:(id)a1;
- (id)initWithActionType:(unsigned long long)a0 timestamp:(id)a1 bundleId:(id)a2;

@end
