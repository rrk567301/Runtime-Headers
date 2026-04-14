@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) id<MSMediaStreamDaemonDelegate> delegate;

- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)didReceiveNewShareState:(id)a0 oldShareState:(id)a1 forPersonID:(id)a2;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (void)start;
- (void)stop;
- (BOOL)mayDownloadPersonID:(id)a0;
- (void)deleteAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)retryOutstandingActivities;
- (void)didReceiveServerSideConfigurationVersion:(id)a0 forPersonID:(id)a1;
- (id)init;
- (void)didUnidle;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)a0;
- (BOOL)hasOutstandingActivity;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (id)_boundPublisherForPersonID:(id)a0;
- (void)stopAllActivities;
- (id)subscribedStreamsForPersonID:(id)a0;
- (id)_boundSubscriberForPersonID:(id)a0;
- (void)didIdle;
- (void)abortAllActivityForPersonID:(id)a0;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (BOOL)personIDHasOutstandingPublications:(id)a0;
- (id)_boundServerSideConfigManagerForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveAuthenticationFailureForPersonID:(id)a0;
- (void)computeHashForAsset:(id)a0 personID:(id)a1;
- (id)nextActivityDate;
- (void)showInvitationFailureAlertForPersonID:(id)a0 failures:(id)a1;
- (BOOL)enqueueAssetCollection:(id)a0 personID:(id)a1 outError:(id *)a2;
- (BOOL)isInRetryState;
- (id)ownSubscribedStreamForPersonID:(id)a0;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)a0;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)a0;
- (void)didExceedPublishQuotaForPersonID:(id)a0 retryDate:(id)a1;
- (void)forgetPersonID:(id)a0;
- (id)_boundDeleterForPersonID:(id)a0;
- (void)resetSubscriberSyncForPersonID:(id)a0;

@end
