@class NSString, AFHomeInfo, NSUUID;

@interface _AFHomeInfoMutation : NSObject <AFHomeInfoMutating> {
    AFHomeInfo *_base;
    NSUUID *_homeIdentifier;
    char _activityNotificationsEnabledForPersonalRequests;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasHomeIdentifier : 1; unsigned char hasActivityNotificationsEnabledForPersonalRequests : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isDirty;
- (void)setHomeIdentifier:(id)a0;
- (char)getActivityNotificationsEnabledForPersonalRequests;
- (id)getHomeIdentifier;
- (id)initWithBase:(id)a0;
- (void)setActivityNotificationsEnabledForPersonalRequests:(char)a0;

@end
