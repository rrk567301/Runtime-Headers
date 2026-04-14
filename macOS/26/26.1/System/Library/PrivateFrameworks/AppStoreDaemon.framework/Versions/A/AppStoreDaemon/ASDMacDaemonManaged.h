@class ASDServiceBroker;

@interface ASDMacDaemonManaged : NSObject {
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;

- (void).cxx_destruct;
- (id)init;

@end
