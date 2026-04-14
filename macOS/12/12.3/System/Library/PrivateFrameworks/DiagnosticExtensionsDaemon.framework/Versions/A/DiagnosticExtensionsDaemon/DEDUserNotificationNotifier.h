@class UNUserNotificationCenter, NSString, DEDNotifierConfiguration, NSObject;
@protocol OS_os_log;

@interface DEDUserNotificationNotifier : NSObject <DEDNotifier, DEDSecureArchiving, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) DEDNotifierConfiguration *config;
@property (retain) NSString *bugSessionIdentifier;
@property (retain) UNUserNotificationCenter *center;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithConfiguration:(id)a0 session:(id)a1;
- (void)scheduleNotification;
- (void)cancelNotification;
- (id)createNotificationCenter;

@end
