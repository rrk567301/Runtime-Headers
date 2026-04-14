@class NSString, NSNumber;

@interface HMHomeWiFiInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *SSID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *BSSID;
@property (readonly, copy, nonatomic) NSNumber *security;
@property (readonly, copy, nonatomic) NSNumber *RSSI;
@property (readonly, copy, nonatomic) NSNumber *scaledRSSI;
@property (readonly) BOOL requiresPassword;
@property (readonly, copy, nonatomic) NSString *macAddress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSSID:(id)a0 requiresPassword:(BOOL)a1;
- (id)initWithSSID:(id)a0 requiresPassword:(BOOL)a1 macAddress:(id)a2 BSSID:(id)a3 displayName:(id)a4 security:(id)a5 RSSI:(id)a6;

@end
