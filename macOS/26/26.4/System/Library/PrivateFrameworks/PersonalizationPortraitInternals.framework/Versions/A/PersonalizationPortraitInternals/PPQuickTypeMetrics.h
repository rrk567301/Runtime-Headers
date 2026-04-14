@class NSObject;
@protocol OS_dispatch_queue;

@interface PPQuickTypeMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)contactMatchesWithContactsCount:(unsigned long long)a0 foundInAppsCount:(unsigned long long)a1;
+ (void)eventsMatches:(unsigned long long)a0;
+ (void)frameworkError:(id)a0 errorCode:(long long)a1;

- (void).cxx_destruct;
- (id)init;

@end
