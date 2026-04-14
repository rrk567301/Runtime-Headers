@class NSNumber;

@interface MTRChannelClusterSkipChannelParams : NSObject <NSCopying>

@property (copy, nonatomic, getter=getCount) NSNumber *count;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
