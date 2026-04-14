@class NSNumber;

@interface MTROtaSoftwareUpdateProviderClusterApplyUpdateResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSNumber *delayedActionTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
