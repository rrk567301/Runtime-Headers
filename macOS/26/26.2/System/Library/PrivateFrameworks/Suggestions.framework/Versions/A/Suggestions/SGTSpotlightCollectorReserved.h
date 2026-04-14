@class NSObject;
@protocol OS_dispatch_source;

@interface SGTSpotlightCollectorReserved : NSObject {
    struct __MDQuery { } *query;
    NSObject<OS_dispatch_source> *fallbackTimer;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
