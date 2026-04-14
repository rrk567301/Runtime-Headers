@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *associationFailureCause;
@property (copy, nonatomic) NSNumber *associationFailure;
@property (copy, nonatomic) NSNumber *status;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
