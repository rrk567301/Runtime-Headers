@class NSArray;

@interface MTRThreadNetworkDiagnosticsClusterNetworkFaultChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *current;
@property (copy, nonatomic) NSArray *previous;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
