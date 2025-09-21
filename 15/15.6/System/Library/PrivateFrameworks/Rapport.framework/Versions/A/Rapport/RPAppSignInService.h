@class NSString, NSArray, SFService, NSObject;
@protocol OS_dispatch_queue;

@interface RPAppSignInService : NSObject {
    char _activateCalled;
    SFService *_bleAdvertiser;
    char _invalidateCalled;
    char _invalidateDone;
}

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;

- (id)description;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidate;
- (void)_invalidated;

@end
