@class NSNumber, NSError, CBLEAudioSessionInfo;

@interface CBLEAudioSessionEvent : NSObject

@property (copy, nonatomic) CBLEAudioSessionInfo *sessionInfo;
@property (copy, nonatomic) NSNumber *updatedValue;
@property (copy, nonatomic) NSError *error;
@property (readonly, nonatomic) long long eventType;

- (void).cxx_destruct;
- (id)initWithEventType:(long long)a0 withError:(id)a1;

@end
