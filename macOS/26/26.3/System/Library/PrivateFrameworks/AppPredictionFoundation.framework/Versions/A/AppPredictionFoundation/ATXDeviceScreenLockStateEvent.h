@class NSString, NSDate;

@interface ATXDeviceScreenLockStateEvent : NSObject <ATXGenericEventBase>

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 isLocked:(BOOL)a2;
- (BOOL)isEqualToATXDeviceScreenLockStateEvent:(id)a0;

@end
