@class ARSession;
@protocol MDARControllerDelegate;

@interface MDARController : NSObject {
    unsigned long long _trackingState;
    unsigned long long _trackingStateReason;
}

@property (class, readonly) BOOL isSupported;

@property (weak, nonatomic) id<MDARControllerDelegate> delegate;
@property (readonly, nonatomic) ARSession *session;
@property (readonly, nonatomic) unsigned long long sessionInterruptedReason;

- (void)pause;
- (void)dealloc;
- (void)run:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;

@end
