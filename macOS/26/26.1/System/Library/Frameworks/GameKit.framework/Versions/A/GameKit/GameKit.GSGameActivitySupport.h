@class NSArray, NSError, _TtC7GameKit21GSGameActivitySupport;

@interface GameKit.GSGameActivitySupport : NSObject {
    void /* unknown type, empty encoding */ service;
}

@property (class, nonatomic, readonly) _TtC7GameKit21GSGameActivitySupport *shared;

- (void).cxx_destruct;
- (id)init;
- (void)loadAllPendingActivitiesForCurrentGameWithCompletionHandler:(void (^)(NSArray *, NSError *))a0;

@end
