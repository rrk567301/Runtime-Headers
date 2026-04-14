@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterConnectionStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *connectionStatus;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
