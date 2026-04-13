@class ASDServiceBroker;

@interface ASDMacDaemonManaged : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)sharedInstance;
+ (id)interface;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)a0;

@end
