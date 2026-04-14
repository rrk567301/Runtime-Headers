@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) id<MSMediaStreamDaemonDelegate> delegate;

- (BOOL)isInRetryState;
- (void)retryOutstandingActivities;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (void)start;
- (void)showInvitationFailureAlertForPersonID:(id)a0 failures:(id)a1;
- (BOOL)hasOutstandingActivity;
- (id)_boundDeleterForPersonID:(id)a0;
- (void)computeHashForAsset:(id)a0 personID:(id)a1;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (id)_boundServerSideConfigManagerForPersonID:(id)a0;
- (void)didReceiveNewShareState:(id)a0 oldShareState:(id)a1 forPersonID:(id)a2;
- (void)didExceedPublishQuotaForPersonID:(id)a0 retryDate:(id)a1;
- (void)forgetPersonID:(id)a0;
- (void)didUnidle;
- (void)resetSubscriberSyncForPersonID:(id)a0;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (BOOL)mayDownloadPersonID:(id)a0;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (id)nextActivityDate;
- (void)didReceiveAuthenticationFailureForPersonID:(id)a0;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)a0;
- (void)stopAllActivities;
- (void)stop;
- (id)subscribedStreamsForPersonID:(id)a0;
- (void)deleteAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (id)ownSubscribedStreamForPersonID:(id)a0;
- (BOOL)personIDHasOutstandingPublications:(id)a0;
- (id)_boundPublisherForPersonID:(id)a0;
- (void)abortAllActivityForPersonID:(id)a0;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)a0;
- (void)didReceiveServerSideConfigurationVersion:(id)a0 forPersonID:(id)a1;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)a0;
- (BOOL)enqueueAssetCollection:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)didIdle;
- (id)init;
- (id)_boundSubscriberForPersonID:(id)a0;

@end
