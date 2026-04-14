@class NSData;

@interface MTRThermostatClusterActiveScheduleChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousScheduleHandle;
@property (copy, nonatomic) NSData *currentScheduleHandle;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
