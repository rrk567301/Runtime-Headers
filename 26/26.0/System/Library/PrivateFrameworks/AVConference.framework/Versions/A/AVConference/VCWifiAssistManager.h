@interface VCWifiAssistManager : NSObject

@property (readonly) BOOL isAvailable;
@property (readonly) unsigned char wifiAssistState;

+ (id)sharedInstance;

- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)init;

@end
