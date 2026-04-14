@class NSPUserNotification, PrivacyProxyServiceStatus, NSMutableArray, NSObject;
@protocol NSPServiceStatusManagerDelegate;

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying> {
    PrivacyProxyServiceStatus *_serviceStatus;
    NSMutableArray *_serviceStatusTimeline;
    NSObject<NSPServiceStatusManagerDelegate> *_delegate;
    long long _diskVersion;
    unsigned long long _generation;
    NSPUserNotification *_userNotification;
    NSMutableArray *_networkStatusTimeline;
    unsigned long long _userTier;
    unsigned long long _effectiveTier;
    unsigned long long _lastOutageType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain) PrivacyProxyServiceStatus *serviceStatus;
@property (readonly, retain) NSMutableArray *serviceStatusTimeline;

+ (void)removeFromPreferences;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)diagnostics;
- (id)initWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (id)initFromPreferencesWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)publishDailyServiceStatus;
- (void)publishDailyNetworkStatus;
- (void)handleEffectiveUserTierChange:(unsigned long long)a0;
- (void)reportServiceActive;
- (void)reportServiceDisabledShouldReport:(BOOL)a0;
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
