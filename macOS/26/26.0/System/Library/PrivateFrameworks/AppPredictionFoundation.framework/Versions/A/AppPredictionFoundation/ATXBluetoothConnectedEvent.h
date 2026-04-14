@class NSString, NSDate;

@interface ATXBluetoothConnectedEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) NSString *deviceAddress;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) long long deviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 connected:(BOOL)a2 deviceAddress:(id)a3 deviceName:(id)a4 deviceType:(long long)a5;
- (BOOL)isEqualToATXBluetoothConnectedEvent:(id)a0;

@end
