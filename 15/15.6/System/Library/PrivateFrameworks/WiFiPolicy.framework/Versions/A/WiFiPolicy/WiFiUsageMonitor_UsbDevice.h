@class NSString;

@interface WiFiUsageMonitor_UsbDevice : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long vid;
@property (nonatomic) char vidIsApple;
@property (nonatomic) unsigned long long locationID;

- (void).cxx_destruct;
- (unsigned long long)controllerID;
- (id)initWithName:(id)a0 vid:(unsigned long long)a1 isApple:(char)a2 locationID:(unsigned long long)a3;

@end
