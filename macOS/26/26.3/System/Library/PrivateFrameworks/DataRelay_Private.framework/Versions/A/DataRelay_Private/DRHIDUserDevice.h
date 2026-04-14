@class HIDUserDevice, NSMutableDictionary;

@interface DRHIDUserDevice : NSObject

@property (retain, nonatomic) HIDUserDevice *userDevice;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long serviceID;
@property (copy, nonatomic) id /* block */ setReportHandler;
@property (copy, nonatomic) NSMutableDictionary *properties;

- (void).cxx_destruct;
- (void)dealloc;
- (void)activate;
- (void)handleReport:(id)a0;

@end
