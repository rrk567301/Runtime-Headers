@class NSMutableArray;

@interface ABCPeriodicMaintenanceActivity : NSObject {
    NSMutableArray *_activities;
    unsigned long long _nextActivityIndex;
}

+ (id)sharedInstance;
+ (long long)periodicActivityInterval;
+ (const char *)periodicActivityID;
+ (void)registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_registerPeriodicMaintenanceActivity;
- (void)_handleActivityRun:(id)a0;
- (void)_registerPeriodicActivityWithIdentifier:(id)a0 queue:(id)a1 activity:(id /* block */)a2;

@end
