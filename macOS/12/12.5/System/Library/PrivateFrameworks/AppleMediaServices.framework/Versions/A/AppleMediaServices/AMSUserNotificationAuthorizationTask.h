@class UNUserNotificationCenter, NSString, AMSUserNotificationAuthorizationOptions;
@protocol AMSUserNotificationAuthorizationDelegate;

@interface AMSUserNotificationAuthorizationTask : AMSTask

@property (retain) UNUserNotificationCenter *notificationCenter;
@property (readonly) NSString *bundleIdentifier;
@property (weak) id<AMSUserNotificationAuthorizationDelegate> delegate;
@property (retain) AMSUserNotificationAuthorizationOptions *options;

+ (id)recordEngagementEventWithBundleIdentifier:(id)a0 options:(id)a1;
+ (id)_findEngagementRequestInResponse:(id)a0;
+ (id)engagementRequestForFullSheet;

- (void).cxx_destruct;
- (id)_startEngagementAuthorizationWithResult:(id)a0;
- (id)_presentDialogForUserInitiatedWithCompletion;
- (id)initWithBundleIdentifier:(id)a0 options:(id)a1;
- (id)requestAuthorization;

@end
