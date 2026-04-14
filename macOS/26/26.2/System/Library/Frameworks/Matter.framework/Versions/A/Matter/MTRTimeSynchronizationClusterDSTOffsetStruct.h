@class NSNumber;

@interface MTRTimeSynchronizationClusterDSTOffsetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSNumber *validStarting;
@property (copy, nonatomic) NSNumber *validUntil;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
