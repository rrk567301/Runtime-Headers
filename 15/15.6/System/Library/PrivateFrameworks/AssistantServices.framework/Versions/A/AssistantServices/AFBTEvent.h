@class NSString, NSNumber;

@interface AFBTEvent : AFEvent

@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *productID;
@property (nonatomic) char hasProductID;
@property (readonly, nonatomic) char starting;
@property (nonatomic) char hasStarting;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) NSNumber *batteryLevelHeadphoneCase;
@property (nonatomic) char hasBatteryLevelHeadphoneCase;
@property (readonly, nonatomic) NSNumber *batteryLevelHeadphoneRight;
@property (nonatomic) char hasBatteryLevelHeadphoneRight;
@property (readonly, nonatomic) NSNumber *batteryLevelHeadphoneLeft;
@property (nonatomic) char hasBatteryLevelHeadphoneLeft;
@property (readonly, nonatomic) char appleAudioDevice;
@property (nonatomic) char hasAppleAudioDevice;
@property (readonly, nonatomic) char userWearing;
@property (nonatomic) char hasUserWearing;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;

@end
