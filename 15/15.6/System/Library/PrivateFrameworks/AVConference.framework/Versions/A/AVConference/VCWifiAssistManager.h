@interface VCWifiAssistManager : NSObject

@property (readonly) char isAvailable;
@property (readonly) unsigned char wifiAssistState;

+ (id)sharedInstance;

- (id)init;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;

@end
