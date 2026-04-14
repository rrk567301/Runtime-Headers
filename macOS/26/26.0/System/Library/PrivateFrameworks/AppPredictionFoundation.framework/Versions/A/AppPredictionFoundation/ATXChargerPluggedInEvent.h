@class NSNumber, NSString, NSDate;

@interface ATXChargerPluggedInEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSNumber *adapterType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 connected:(BOOL)a2 adapterType:(id)a3;
- (BOOL)isEqualToATXChargerPluggedInEvent:(id)a0;

@end
