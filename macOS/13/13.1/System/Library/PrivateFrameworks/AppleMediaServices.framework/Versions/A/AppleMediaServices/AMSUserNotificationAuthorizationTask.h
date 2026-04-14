@class UNUserNotificationCenter, NSString, AMSUserNotificationAuthorizationOptions;
@protocol AMSUserNotificationAuthorizationDelegate;

@interface AMSUserNotificationAuthorizationTask : AMSTask

@property (retain) UNUserNotificationCenter *notificationCenter;
@property (readonly) NSString *bundleIdentifier;
@property (weak) id<AMSUserNotificationAuthorizationDelegate> delegate;
@property (retain) AMSUserNotificationAuthorizationOptions *options;

+ (id)engagementRequestForFullSheet;
+ (id)_findEngagementRequestInResponse:(id)a0;
+ (id)recordEngagementEventWithBundleIdentifier:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 options:(id)a1;
- (id)requestAuthorization;
- (id)_presentDialogForUserInitiatedWithCompletion;
- (id)_startEngagementAuthorizationWithResult:(id)a0;

@end
