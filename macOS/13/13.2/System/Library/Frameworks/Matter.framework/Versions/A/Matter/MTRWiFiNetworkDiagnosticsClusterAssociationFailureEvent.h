@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *associationFailure;
@property (copy, nonatomic) NSNumber *status;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
