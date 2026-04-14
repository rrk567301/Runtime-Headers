@interface PLProcessExitAggregator : NSObject <NSCopying>

@property unsigned int labelIdx;
@property unsigned int lastTTR;
@property unsigned char exitReasonNamespace;
@property unsigned long long exitReasonCode;
@property unsigned long long jetsamPriority;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
