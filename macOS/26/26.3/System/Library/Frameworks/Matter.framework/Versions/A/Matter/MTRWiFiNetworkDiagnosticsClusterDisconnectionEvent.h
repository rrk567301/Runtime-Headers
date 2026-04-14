@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterDisconnectionEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *reasonCode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
