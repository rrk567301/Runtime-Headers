@class NSString, NSDate, AFHeadGestureResponse;

@interface _AFHeadGestureResponseMutation : NSObject <AFHeadGestureResponseMutating> {
    AFHeadGestureResponse *_base;
    long long _userIntent;
    long long _gestureType;
    unsigned long long _activeContexts;
    NSDate *_timestamp;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasUserIntent : 1; unsigned char hasGestureType : 1; unsigned char hasActiveContexts : 1; unsigned char hasTimestamp : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setActiveContexts:(unsigned long long)a0;
- (id)initWithBase:(id)a0;
- (void).cxx_destruct;
- (void)setTimestamp:(id)a0;
- (id)getTimestamp;
- (void)setGestureType:(long long)a0;
- (unsigned long long)getActiveContexts;
- (long long)getGestureType;
- (long long)getUserIntent;
- (void)setUserIntent:(long long)a0;

@end
