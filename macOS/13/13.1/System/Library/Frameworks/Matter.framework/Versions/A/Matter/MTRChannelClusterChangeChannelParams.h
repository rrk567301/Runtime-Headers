@class NSString, NSNumber;

@interface MTRChannelClusterChangeChannelParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *match;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
