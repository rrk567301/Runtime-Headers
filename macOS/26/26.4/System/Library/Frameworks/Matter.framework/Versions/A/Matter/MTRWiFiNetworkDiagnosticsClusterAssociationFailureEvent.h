@class NSNumber;

@interface MTRWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *associationFailureCause;
@property (copy, nonatomic) NSNumber *associationFailure;
@property (copy, nonatomic) NSNumber *status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
