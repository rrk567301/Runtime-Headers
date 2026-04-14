@class NSNumber;

@interface MTRTimeSynchronizationClusterDstOffsetType : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validStarting;
@property (copy, nonatomic) NSNumber *validUntil;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
