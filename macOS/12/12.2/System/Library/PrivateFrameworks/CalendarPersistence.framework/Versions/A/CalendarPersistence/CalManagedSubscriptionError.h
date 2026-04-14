@class CalManagedSubscriptionInfo;

@interface CalManagedSubscriptionError : CalManagedError

@property (retain) CalManagedSubscriptionInfo *subscriptionInfo;

+ (id)entityName;

- (id)copyScrubbedUserInfoForError:(id)a0;

@end
