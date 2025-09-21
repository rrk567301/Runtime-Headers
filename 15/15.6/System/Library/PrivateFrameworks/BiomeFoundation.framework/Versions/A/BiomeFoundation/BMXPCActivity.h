@class NSString, NSObject;
@protocol OS_xpc_object;

@interface BMXPCActivity : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) NSString *activityName;

- (void).cxx_destruct;
- (char)shouldDefer;
- (long long)_state;
- (id)initWithActivity:(id)a0;
- (char)setDone;
- (char)_setDefer;
- (char)didDefer;
- (id)initWithActivity:(id)a0 activityName:(id)a1;
- (char)setContinue;

@end
