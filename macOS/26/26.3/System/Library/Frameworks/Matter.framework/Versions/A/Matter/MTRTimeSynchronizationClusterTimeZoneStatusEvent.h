@class NSNumber, NSString;

@interface MTRTimeSynchronizationClusterTimeZoneStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
