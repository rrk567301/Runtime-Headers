@class SFService, NSObject;
@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)invalidate;
- (id)init;
- (id)description;
- (void)activate;
- (void).cxx_destruct;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionStarted:(id)a0;

@end
