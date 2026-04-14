@class NSArray, NSString, NSMutableDictionary, ACAccount, NSObject, AMSMetricsEvent;
@protocol OS_dispatch_queue;

@interface AMSFollowUpItem : NSObject

@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSObject<OS_dispatch_queue> *metricsQueue;
@property (retain) ACAccount *account;
@property (retain) NSArray *actions;
@property (readonly) BOOL active;
@property (readonly) NSString *backingIdentifier;
@property BOOL disableGrouping;
@property long long displayStyle;
@property (retain) NSString *footer;
@property (readonly) NSString *groupIdentifier;
@property (getter=isHardwareOffer) BOOL hardwareOffer;
@property (retain) NSString *identifier;
@property (retain) NSString *informativeText;
@property (retain) NSString *logKey;
@property (retain) AMSMetricsEvent *metricsEvent;
@property long long priority;
@property BOOL shouldPostNotification;
@property (retain) NSString *title;
@property (retain) NSMutableDictionary *userInfo;

+ (id)backingIdentifierForIdentifier:(id)a0 account:(id)a1;
+ (id)componentsFromBackingIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 account:(id)a1 priority:(long long)a2;
- (id)initWithFollowUpItem:(id)a0;
- (BOOL)shouldOverwriteItem:(id)a0;
- (id)generateItem;
- (id)postMetricsWithBag:(id)a0;
- (id)postMetricsWithBagContract:(id)a0;

@end
