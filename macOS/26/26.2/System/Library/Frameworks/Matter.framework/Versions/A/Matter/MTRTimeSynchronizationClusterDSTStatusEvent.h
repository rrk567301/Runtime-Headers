@class NSNumber;

@interface MTRTimeSynchronizationClusterDSTStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dstOffsetActive;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
