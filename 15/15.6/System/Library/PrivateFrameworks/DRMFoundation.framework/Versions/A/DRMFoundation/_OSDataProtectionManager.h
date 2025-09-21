@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _OSDataProtectionManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) char deviceFormatedForContentProtection;
@property (readonly, nonatomic) NSMutableDictionary *handlers;
@property (readonly, nonatomic) NSMutableDictionary *availableState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) int notifyToken;
@property (readonly, nonatomic) char notifyEnabled;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)isDataAvailableFor:(id)a0;
- (void)deregisterStateChangeHandler:(id)a0;
- (id)registerStateChangeHandler:(id /* block */)a0;

@end
