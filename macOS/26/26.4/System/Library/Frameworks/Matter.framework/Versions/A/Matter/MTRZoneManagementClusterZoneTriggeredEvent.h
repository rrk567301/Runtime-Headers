@class NSNumber;

@interface MTRZoneManagementClusterZoneTriggeredEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *zone;
@property (copy, nonatomic) NSNumber *reason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
