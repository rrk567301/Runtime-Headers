@class NEHelper, NSObject;
@protocol OS_dispatch_queue;

@interface NEHotspotConfigurationHelper : NSObject {
    NEHelper *_helper;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;

@end
