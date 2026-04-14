@class NSString, NSSet;
@protocol AMSPushHandlerDelegate;

@interface AMSPushConfiguration : NSObject

@property (weak) id<AMSPushHandlerDelegate> delegate;
@property (retain) NSString *engagementPushTopic;
@property (retain) NSString *userNotificationExtensionId;
@property (retain) NSSet *enabledActionTypes;

- (id)initWithEnabledActionTypes:(id)a0;
- (void).cxx_destruct;

@end
