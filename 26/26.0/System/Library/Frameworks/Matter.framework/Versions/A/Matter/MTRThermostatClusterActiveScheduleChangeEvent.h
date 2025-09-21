@class NSData;

@interface MTRThermostatClusterActiveScheduleChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousScheduleHandle;
@property (copy, nonatomic) NSData *currentScheduleHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
