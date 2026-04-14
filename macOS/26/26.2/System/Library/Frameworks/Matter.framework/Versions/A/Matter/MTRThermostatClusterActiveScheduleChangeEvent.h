@class NSData;

@interface MTRThermostatClusterActiveScheduleChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousScheduleHandle;
@property (copy, nonatomic) NSData *currentScheduleHandle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
