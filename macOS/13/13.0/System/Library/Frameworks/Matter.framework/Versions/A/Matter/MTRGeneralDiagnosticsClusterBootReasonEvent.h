@class NSNumber;

@interface MTRGeneralDiagnosticsClusterBootReasonEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *bootReason;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
