@class NSNumber;

@interface MTRZoneManagementClusterZoneTriggeredEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zone;
@property (copy, nonatomic) NSNumber *reason;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
