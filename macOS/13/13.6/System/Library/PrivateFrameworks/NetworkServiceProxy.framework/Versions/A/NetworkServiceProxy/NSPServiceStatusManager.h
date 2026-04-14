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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)diagnostics;
- (BOOL)isServiceActive;
- (BOOL)isNetworkOutage;
- (BOOL)isServiceOutage;
- (void)clearNetworkStatusForType:(int)a0;
- (void)handleEffectiveUserTierChange:(unsigned long long)a0;
- (id)initFromPreferencesWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (id)initWithUserTier:(unsigned long long)a0 effectiveUserTier:(unsigned long long)a1 delegate:(id)a2;
- (void)publishDailyNetworkStatus;
- (void)publishDailyServiceStatus;
- (void)reportActiveOnCellularName:(id)a0;
- (void)reportActiveOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportActiveOnWiFiName:(id)a0;
- (void)reportBlockedOnCellularName:(id)a0;
- (void)reportBlockedOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportBlockedOnWiFiName:(id)a0;
- (void)reportDisabledOnCellularName:(id)a0;
- (void)reportDisabledOnInterfaceName:(id)a0 displayName:(id)a1 type:(int)a2;
- (void)reportDisabledOnWiFiName:(id)a0;
- (void)reportFraudAlert;
- (void)reportServiceActiveShouldReport:(BOOL)a0;
- (void)reportServiceDisabledShouldReport:(BOOL)a0;
- (void)reportServiceOutageWithType:(unsigned long long)a0 outageReasonStats:(id)a1;
- (void)reportSubscriberUnsupportedRegion:(id)a0;
- (void)reportSystemIncompatibility;
- (void)reportUnsupportedRegion:(id)a0;

@end
