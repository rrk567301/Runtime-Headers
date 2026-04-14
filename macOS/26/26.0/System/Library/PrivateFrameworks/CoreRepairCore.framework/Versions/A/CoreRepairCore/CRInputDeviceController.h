@class NSNumber;

@interface CRInputDeviceController : NSObject

@property (nonatomic) struct __IOHIDDevice { } *hidDevice;
@property (nonatomic) struct __IOHIDManager { } *hidManager;
@property (retain, nonatomic) NSNumber *primaryUsagePageKey;
@property (retain, nonatomic) NSNumber *primaryUsageKey;
@property (nonatomic) long long overrideReportID;
@property (nonatomic) long long type;

- (id)initWithType:(long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_closeHIDDevice;
- (BOOL)_openHIDDevice;
- (int)_tryOpenHIDDevice;
- (BOOL)isForceEnabledWithIOStatus:(int *)a0;
- (void)setOverrideEnabled:(BOOL)a0 withIOStatus:(int *)a1;

@end
