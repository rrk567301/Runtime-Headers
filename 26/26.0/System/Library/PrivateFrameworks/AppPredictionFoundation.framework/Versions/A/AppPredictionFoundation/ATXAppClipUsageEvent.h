@class NSString, NSDate;

@interface ATXAppClipUsageEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) NSDate *launchDate;
@property (readonly, nonatomic) NSString *urlHash;
@property (readonly, nonatomic) NSString *clipBundleID;
@property (readonly, nonatomic) NSString *parentAppBundleID;
@property (readonly, nonatomic) NSString *webAppBundleID;
@property (readonly, nonatomic) int launchReason;
@property (readonly, nonatomic) NSString *fullURL;
@property (readonly, nonatomic) NSString *referrerURL;
@property (readonly, nonatomic) NSString *referrerBundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLaunchDate:(id)a0 urlHash:(id)a1 clipBundleID:(id)a2 parentAppBundleID:(id)a3 webAppBundleID:(id)a4 launchReason:(int)a5 fullURL:(id)a6 referrerURL:(id)a7 referrerBundleID:(id)a8;
- (BOOL)isEqualToATXAppClipUsageEvent:(id)a0;

@end
