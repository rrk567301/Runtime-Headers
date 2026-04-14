@class NSArray;

@interface ATXDeviceUsageEvents : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *continuousDeviceUsageEvents;
@property (readonly, copy, nonatomic) NSArray *mindlessCyclingEvents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContinuousDeviceUsageEvent:(id)a0 mindlessCyclingEvents:(id)a1;

@end
