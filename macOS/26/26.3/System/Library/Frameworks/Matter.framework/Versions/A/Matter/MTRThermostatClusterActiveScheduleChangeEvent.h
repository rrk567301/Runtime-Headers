@class NSData;

@interface MTRThermostatClusterActiveScheduleChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSData *previousScheduleHandle;
@property (copy, nonatomic) NSData *currentScheduleHandle;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
