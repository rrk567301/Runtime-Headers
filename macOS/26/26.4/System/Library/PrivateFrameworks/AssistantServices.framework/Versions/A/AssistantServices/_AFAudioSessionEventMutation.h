@class NSString, AFAudioSessionEvent;

@interface _AFAudioSessionEventMutation : NSObject <AFAudioSessionEventMutating> {
    AFAudioSessionEvent *_base;
    long long _eventType;
    long long _eventTime;
    unsigned long long _hostTime;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasEventType : 1; unsigned char hasEventTime : 1; unsigned char hasHostTime : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setEventTime:(long long)a0;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setEventType:(long long)a0;
- (unsigned long long)getHostTime;
- (long long)getEventTime;
- (long long)getEventType;
- (void)setHostTime:(unsigned long long)a0;

@end
