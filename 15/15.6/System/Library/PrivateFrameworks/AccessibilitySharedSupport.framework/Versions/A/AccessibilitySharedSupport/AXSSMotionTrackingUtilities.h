@class NSDictionary;

@interface AXSSMotionTrackingUtilities : NSObject

@property (class, readonly, nonatomic) NSDictionary *axss_xPositionElementMatchingDict;
@property (class, readonly, nonatomic) NSDictionary *axss_yPositionElementMatchingDict;
@property (class, readonly, nonatomic) NSDictionary *axss_statusElementMatchingDict;
@property (class, readonly, nonatomic) NSDictionary *axss_frequencyElementMatchingDict;

+ (char)_axss_iAPInterfaceExistsForHIDDeviceService:(unsigned int)a0;
+ (char)axss_HIDDeviceIsMFiAuthenticated:(id)a0;

@end
