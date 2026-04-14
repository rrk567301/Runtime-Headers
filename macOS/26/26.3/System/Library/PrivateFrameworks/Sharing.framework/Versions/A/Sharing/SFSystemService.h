@class SFService, NSObject;
@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)invalidate;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleSessionStarted:(id)a0;

@end
