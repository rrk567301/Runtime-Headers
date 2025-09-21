@interface HDCloudSyncAvailability : NSObject

@property (readonly, nonatomic) char shouldPull;
@property (readonly, nonatomic) char shouldPush;
@property (readonly, nonatomic) char shouldSyncMedicalID;
@property (readonly, nonatomic) char shouldSyncSummarySharingPush;
@property (readonly, nonatomic) char shouldSyncSummarySharingPull;
@property (readonly, nonatomic) char shouldSyncAttachments;
@property (readonly, nonatomic) char shouldSyncDeviceContext;
@property (readonly, nonatomic) char shouldSyncStateEntities;

- (void)_setShouldPullWithProfileType:(long long)a0;
- (void)_setShouldPushWithProfileType:(long long)a0;
- (void)_setShouldSyncAttachmentsWithProfileType:(long long)a0;
- (void)_setShouldSyncDeviceContextWithProfileType:(long long)a0;
- (void)_setShouldSyncMedicalIDWithProfileType:(long long)a0;
- (void)_setShouldSyncStateEntitiesWithProfileType:(long long)a0;
- (void)_setShouldSyncSummarySharingPullWithProfileType:(long long)a0 behavior:(id)a1;
- (void)_setShouldSyncSummarySharingPushWithProfileType:(long long)a0 behavior:(id)a1;
- (id)initWithProfileType:(long long)a0 behavior:(id)a1;

@end
