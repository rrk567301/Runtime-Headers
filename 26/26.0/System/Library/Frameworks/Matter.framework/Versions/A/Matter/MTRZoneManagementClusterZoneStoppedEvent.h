@class NSNumber;

@interface MTRZoneManagementClusterZoneStoppedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zone;
@property (copy, nonatomic) NSNumber *reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
