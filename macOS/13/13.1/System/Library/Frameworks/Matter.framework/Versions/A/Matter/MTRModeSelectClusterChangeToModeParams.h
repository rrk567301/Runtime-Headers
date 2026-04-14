@class NSNumber;

@interface MTRModeSelectClusterChangeToModeParams : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewMode) NSNumber *newMode;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
