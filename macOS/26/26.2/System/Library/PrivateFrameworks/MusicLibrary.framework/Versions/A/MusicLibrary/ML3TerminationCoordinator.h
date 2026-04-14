@class NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ML3TerminationCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableSet *_signatures;
    int _notifyToken;
}

@property (class, readonly, nonatomic) ML3TerminationCoordinator *sharedCoordinator;

@property (readonly, nonatomic) BOOL isSigned;

- (BOOL)isSignedForReason:(long long)a0;
- (void)execute;
- (void)_performTermination;
- (void)signForReason:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)secedeForReason:(long long)a0;
- (void)dealloc;

@end
