@class ATXHeuristicDevice;

@interface ATXChangeAlarmBeforeHolidayDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)scheduledBedTimeWithCallback:(id /* block */)a0;
- (void)predictedBedTimeWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
