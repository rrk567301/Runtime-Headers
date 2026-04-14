@class NSString;

@interface NEHotspotNetwork : NSObject

@property struct __CNNetwork { } *network;
@property (readonly) NSString *interfaceName;
@property long long securityType;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0;

- (void)dealloc;
- (id)description;
- (void)setPassword:(id)a0;
- (void)setConfidence:(long long)a0;
- (BOOL)isSecure;
- (double)signalStrength;
- (id)initWithNetwork:(struct __CNNetwork { } *)a0 securityType:(id)a1;
- (id)initWithNetwork:(struct __CNNetwork { } *)a0;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;

@end
