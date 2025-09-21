@class NSString, NSHashTable, NSObject;
@protocol OS_os_activity;

@interface PFTActivity : NSObject <BSInvalidatable> {
    struct os_activity_scope_state_s { unsigned long long x0[2]; } *_state;
    NSHashTable *_weakSentinels;
}

@property (readonly, nonatomic) NSObject<OS_os_activity> *wrappedActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)activityWrapping:(id)a0;

- (void)apply:(id /* block */)a0;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (void)performActivity:(id /* block */)a0;
- (id)track;

@end
