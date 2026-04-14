@class NSNumber;

@interface MTRTimeSynchronizationClusterDSTStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dstOffsetActive;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
