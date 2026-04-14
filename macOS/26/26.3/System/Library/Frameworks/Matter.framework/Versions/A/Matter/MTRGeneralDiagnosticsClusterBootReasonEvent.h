@class NSNumber;

@interface MTRGeneralDiagnosticsClusterBootReasonEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *bootReason;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
