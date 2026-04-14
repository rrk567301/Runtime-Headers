@class NSNumber;

@interface MTRSampleMEIClusterPingCountEventEvent : NSObject <NSCopying>

@property (copy, nonatomic, getter=getCount) NSNumber *count;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
