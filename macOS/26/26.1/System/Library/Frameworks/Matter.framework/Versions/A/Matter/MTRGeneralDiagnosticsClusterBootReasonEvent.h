@class NSNumber;

@interface MTRGeneralDiagnosticsClusterBootReasonEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *bootReason;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
