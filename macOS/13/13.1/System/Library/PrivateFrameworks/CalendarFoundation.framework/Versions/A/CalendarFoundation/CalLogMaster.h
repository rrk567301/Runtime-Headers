@class NSArray, NSObject, CalLogNode;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CalLogMaster : NSObject {
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) NSArray *topLevelNodes;
@property (retain, nonatomic) CalLogNode *oslogNode;
@property (retain, nonatomic) CalLogNode *standardOutNode;
@property (retain, nonatomic) CalLogNode *rootConfigurationNode;
@property (retain, nonatomic) CalLogNode *userNotificationNode;
@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic) BOOL hasValidNotificationRegistrationToken;
@property (nonatomic) BOOL autoFlush;

+ (id)sharedLogMaster;

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)flush;
- (void)loadPreferredConfiguration;
- (void)configureOSLogNode;
- (void)configureStandardOutNode;
- (void)configureRootConfigurationNode;
- (BOOL)shouldProcessNamespace:(id)a0;
- (void)reloadTopLevelNodes;
- (void)registerForConfigUpdateNotifications;
- (int)findMinimumLevel;
- (id)findPermittedList;
- (void)processEnvelope:(id)a0;

@end
