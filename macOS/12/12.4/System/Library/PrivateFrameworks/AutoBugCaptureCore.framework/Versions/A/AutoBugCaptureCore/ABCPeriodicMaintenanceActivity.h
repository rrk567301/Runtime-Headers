@class NSMutableArray;

@interface ABCPeriodicMaintenanceActivity : NSObject {
    NSMutableArray *_activities;
    unsigned long long _nextActivityIndex;
}

+ (id)sharedInstance;
+ (void)registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;
- (void)_registerPeriodicMaintenanceActivity;
- (void)_handleActivityRun:(id)a0;

@end
