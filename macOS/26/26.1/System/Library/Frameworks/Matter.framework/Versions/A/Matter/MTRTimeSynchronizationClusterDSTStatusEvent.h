@class NSNumber;

@interface MTRTimeSynchronizationClusterDSTStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dstOffsetActive;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
