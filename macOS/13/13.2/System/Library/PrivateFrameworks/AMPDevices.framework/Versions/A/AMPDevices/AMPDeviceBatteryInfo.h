@class NSImage, BUIViewController;

@interface AMPDeviceBatteryInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BUIViewController *buiViewController;
@property (retain, nonatomic) NSImage *batteryBoltImage;
@property (retain, nonatomic) NSImage *batteryBoltMaskImage;
@property (nonatomic) BOOL batteryIsCharging;
@property (nonatomic) BOOL batteryIsFullyCharged;
@property (nonatomic) BOOL batteryGasGaugeCapability;
@property (nonatomic) long long batteryCurrentCapacity;
@property (retain, nonatomic) NSImage *batteryImage;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)tintImage:(id)a0 withColor:(id)a1;
- (id)batteryFullImage;
- (id)batteryEmptyChargingImage;
- (id)batteryEmptyImage;
- (struct CGImage { } *)batteryBoltMaskClipForImageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)batteryImageWithCapacityPercentage:(double)a0 isBatteryCharging:(BOOL)a1;
- (id)batteryImageWithBatteryInfo:(id)a0;

@end
