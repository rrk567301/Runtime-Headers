@class ARSession;
@protocol MDARControllerDelegate;

@interface MDARController : NSObject {
    unsigned long long _trackingState;
    unsigned long long _trackingStateReason;
}

@property (class, readonly) BOOL isSupported;

@property (nonatomic) id<MDARControllerDelegate> delegate;
@property (readonly, nonatomic) ARSession *session;
@property (readonly, nonatomic) unsigned long long sessionInterruptedReason;

- (void)dealloc;
- (id)init;
- (void)pause;
- (void)run:(BOOL)a0;

@end
