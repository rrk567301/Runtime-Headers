@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSArray *wifiKnownNetworkSSIDs;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (id)init;
- (void).cxx_destruct;

@end
