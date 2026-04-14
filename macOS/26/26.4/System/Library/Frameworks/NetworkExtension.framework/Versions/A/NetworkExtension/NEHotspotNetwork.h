@class NSString;

@interface NEHotspotNetwork : NSObject {
    struct __CNNetwork { } *_network;
}

@property long long securityType;
@property (readonly) NSString *SSID;
@property (readonly) NSString *BSSID;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)a0;

- (void)setPassword:(id)a0;
- (BOOL)isSecure;
- (void)setConfidence:(long long)a0;
- (id)description;
- (double)signalStrength;
- (void)dealloc;
- (BOOL)didAutoJoin;
- (BOOL)didJustJoin;
- (BOOL)isChosenHelper;

@end
