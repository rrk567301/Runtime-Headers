@class NSImage, BUIViewController;

@interface AMPDeviceBatteryInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) BUIViewController *buiViewController;
@property (retain, nonatomic) NSImage *batteryBoltImage;
@property (retain, nonatomic) NSImage *batteryBoltMaskImage;
@property (nonatomic) char batteryIsCharging;
@property (nonatomic) char batteryIsFullyCharged;
@property (nonatomic) char batteryGasGaugeCapability;
@property (nonatomic) long long batteryCurrentCapacity;
@property (retain, nonatomic) NSImage *batteryImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tintImage:(id)a0 withColor:(id)a1;
- (struct CGImage { } *)batteryBoltMaskClipForImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)batteryEmptyChargingImage;
- (id)batteryEmptyImage;
- (id)batteryFullImage;
- (id)batteryImageWithBatteryInfo:(id)a0;
- (id)batteryImageWithCapacityPercentage:(double)a0 isBatteryCharging:(char)a1;

@end
