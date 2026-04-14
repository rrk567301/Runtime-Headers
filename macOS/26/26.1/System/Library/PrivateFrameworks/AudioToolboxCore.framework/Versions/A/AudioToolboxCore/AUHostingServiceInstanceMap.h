@class NSMutableDictionary;

@interface AUHostingServiceInstanceMap : NSObject {
    NSMutableDictionary *_instances;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)registerInstance:(id)a0 instance:(id)a1;
- (id)retrieveInstance:(id)a0;
- (void)unregisterInstance:(id)a0;

@end
