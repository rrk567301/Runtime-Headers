@class NSString, NSMapTable, NSTimer, NSDate, NSObject, AMSURLSession;
@protocol OS_dispatch_queue, AMSMediaTokenServiceProtocol;

@interface AMSMediaSharedProperties : NSObject

@property (class, readonly) NSMapTable *sharedPropertiesMapTable;
@property (class, readonly) NSObject<OS_dispatch_queue> *accessQueue;

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property long long activeTaskCount;
@property (retain) NSTimer *cleanupTimer;
@property (retain) NSDate *lastAccessTime;
@property double timeout;
@property (readonly) AMSURLSession *session;
@property (readonly) id<AMSMediaTokenServiceProtocol> tokenService;

+ (id)propertiesForMarketingItemTask:(id)a0;
+ (id)_propertiesForClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4 URLSessionConfiguration:(id)a5 task:(id)a6;
+ (id)_propertiesForClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4 task:(id)a5;
+ (id)propertiesForMediaTask:(id)a0;
+ (id)propertiesForMercuryCacheFetchTask:(id)a0;
+ (id)propertiesForNotificationSettingsTask:(id)a0;
+ (id)propertiesForRatingsTask:(id)a0;
+ (id)propertiesForStorefrontsTask:(id)a0;
+ (id)propertiesForUserNotificationSettingsTask:(id)a0;

- (void)_performCleanup;
- (void).cxx_destruct;
- (id)getTokenService;
- (void)_cancelCleanupTimer;
- (id)_initWithClientIdentifier:(id)a0 account:(id)a1 bag:(id)a2 clientInfo:(id)a3 URLKnownToBeTrusted:(BOOL)a4 URLSessionConfiguration:(id)a5;
- (void)_scheduleCleanupWithTimeout:(double)a0;
- (void)_taskDidFinish;
- (void)_taskDidStart;
- (id)getSession;

@end
