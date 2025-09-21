@class NSNumber, NSString;

@interface MTRTimeSynchronizationClusterTimeZoneStatusEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *offset;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
