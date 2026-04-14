@class NSString, AFHomeInfo, NSUUID;

@interface _AFHomeInfoMutation : NSObject <AFHomeInfoMutating> {
    AFHomeInfo *_baseModel;
    NSUUID *_homeIdentifier;
    BOOL _activityNotificationsEnabledForPersonalRequests;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasHomeIdentifier : 1; unsigned char hasActivityNotificationsEnabledForPersonalRequests : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setHomeIdentifier:(id)a0;
- (id)initWithBaseModel:(id)a0;
- (id)generate;
- (void)setActivityNotificationsEnabledForPersonalRequests:(BOOL)a0;

@end
