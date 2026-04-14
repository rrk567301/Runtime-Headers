@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) id<MSMediaStreamDaemonDelegate> delegate;

- (void)stop;
- (void)computeHashForAsset:(id)a0 personID:(id)a1;
- (BOOL)personIDHasOutstandingPublications:(id)a0;
- (void)resetSubscriberSyncForPersonID:(id)a0;
- (id)_boundDeleterForPersonID:(id)a0;
- (void)stopAllActivities;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (void)didReceiveServerSideConfigurationVersion:(id)a0 forPersonID:(id)a1;
- (BOOL)mayDownloadPersonID:(id)a0;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)a0;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)a0;
- (void)didUnidle;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (id)_boundServerSideConfigManagerForPersonID:(id)a0;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (void)retryOutstandingActivities;
- (id)nextActivityDate;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (id)subscribedStreamsForPersonID:(id)a0;
- (void)didExceedPublishQuotaForPersonID:(id)a0 retryDate:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasOutstandingActivity;
- (void)abortAllActivityForPersonID:(id)a0;
- (id)ownSubscribedStreamForPersonID:(id)a0;
- (id)init;
- (void)start;
- (void)forgetPersonID:(id)a0;
- (BOOL)isInRetryState;
- (id)_boundSubscriberForPersonID:(id)a0;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)a0;
- (void)deleteAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (void)showInvitationFailureAlertForPersonID:(id)a0 failures:(id)a1;
- (void)didIdle;
- (void)didReceiveNewShareState:(id)a0 oldShareState:(id)a1 forPersonID:(id)a2;
- (void)didReceiveAuthenticationFailureForPersonID:(id)a0;
- (id)_boundPublisherForPersonID:(id)a0;
- (BOOL)enqueueAssetCollection:(id)a0 personID:(id)a1 outError:(id *)a2;

@end
