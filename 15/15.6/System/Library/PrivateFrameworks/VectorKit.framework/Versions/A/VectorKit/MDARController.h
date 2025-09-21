@class ARSession;
@protocol MDARControllerDelegate;

@interface MDARController : NSObject {
    unsigned long long _trackingState;
    unsigned long long _trackingStateReason;
}

@property (class, readonly) char isSupported;

@property (weak, nonatomic) id<MDARControllerDelegate> delegate;
@property (readonly, nonatomic) ARSession *session;
@property (readonly, nonatomic) unsigned long long sessionInterruptedReason;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)run:(char)a0;

@end
