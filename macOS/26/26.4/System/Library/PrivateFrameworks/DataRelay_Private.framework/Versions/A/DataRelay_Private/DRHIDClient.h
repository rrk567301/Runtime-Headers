@class HIDEventSystemClient, NSMutableDictionary, NSData;

@interface DRHIDClient : NSObject

@property (nonatomic) BOOL isActivated;
@property (nonatomic) long long clientType;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (retain, nonatomic) HIDEventSystemClient *HIDClient;
@property (retain, nonatomic) NSMutableDictionary *HIDServices;
@property (retain, nonatomic) NSData *wxRoute;

- (void)activate;
- (id)initWithClientType:(long long)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)reset;
- (id)init;
- (void)dealloc;
- (struct { unsigned char x0; unsigned char x1[3]; unsigned long long x2; unsigned int x3; unsigned int x4; } *)getSensorTime:(id)a0;
- (void)handleEvent:(id)a0 withService:(id)a1;
- (void)routedWxDeviceChanged:(id)a0;
- (void)serviceAdded:(id)a0;
- (void)serviceRemoved:(id)a0 resetReportInterval:(BOOL)a1;

@end
