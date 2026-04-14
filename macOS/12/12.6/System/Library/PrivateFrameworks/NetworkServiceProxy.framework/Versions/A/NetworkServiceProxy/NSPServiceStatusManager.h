@class NSMutableArray, PrivacyProxyServiceStatus, NSObject, NSPUserNotification;
@protocol NSPServiceStatusManagerDelegate;

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) NSObject<NSPServiceStatusManagerDelegate> *delegate;
@property (readonly) long long diskVersion;
@property (nonatomic) unsigned long long generation;
@property (retain) PrivacyProxyServiceStatus *serviceStatus;
@property (retain) NSPUserNotification *userNotification;
@property (retain) NSMutableArray *serviceStatusTimeline;
@property (retain) NSMutableArray *networkStatusTimeline;
@property unsigned long long userTier;
@property unsigned long long effectiveTier;
@property unsigned long long lastOutageType;

+ (void)removeFromPreferences;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)queue;
- (void)postNotification;
- (id)diagnostics;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)saveToPreferences;
- (void)setServiceStatusOnTimeline:(unsigned long long)a0;
- (id)initWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (BOOL)isEffectiveTierSubscriber;
- (void)reportServiceStatus:(unsigned long long)a0 title:(id)a1 message:(id)a2 serviceStatusDetails:(id)a3;
- (void)setNetworkStatusOnTimeline:(id)a0;
- (BOOL)updateNetworkStatus:(unsigned long long)a0 type:(int)a1 name:(id)a2;
- (id)initFromPreferencesWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)publishDailyServiceStatus;
- (void)publishDailyNetworkStatus;
- (void)openiCloudSettings;
- (void)handleEffectiveUserTierChange:(unsigned long long)a0;
- (void)reportServiceActive;
- (void)reportServiceDisabled;
- (void)reportServiceOutageWithType:(unsigned long long)a0 outageReasonStats:(id)a1;
- (BOOL)isServiceActive;
- (BOOL)isServiceOutage;
- (BOOL)isNetworkOutage;
- (void)reportFraudAlert;
- (void)reportUnsupportedRegion:(id)a0;
- (void)reportSubscriberUnsupportedRegion:(id)a0;
- (void)reportSystemIncompatibility;
- (void)clearNetworkStatusForType:(int)a0;
- (void)reportActiveOnWiFiName:(id)a0;
- (void)reportDisabledOnWiFiName:(id)a0;
- (void)reportBlockedOnWiFiName:(id)a0;
- (void)reportActiveOnCellularName:(id)a0;
- (void)reportDisabledOnCellularName:(id)a0;
- (void)reportBlockedOnCellularName:(id)a0;
- (void)reportActiveOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportDisabledOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportBlockedOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;

@end
