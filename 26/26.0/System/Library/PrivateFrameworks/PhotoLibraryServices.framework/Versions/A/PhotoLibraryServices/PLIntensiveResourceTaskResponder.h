@class NSProgress, NSString, PLProgressFollower;
@protocol PLIntensiveResourceTaskResponderDelegate;

@interface PLIntensiveResourceTaskResponder : NSObject {
    PLProgressFollower *_progressFollower;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) id /* block */ lock_completionHandler;
@property (weak, nonatomic) id<PLIntensiveResourceTaskResponderDelegate> delegate;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, copy, nonatomic) NSString *trackingIdentifier;

- (void)cancel;
- (id)description;
- (void).cxx_destruct;
- (void)attachToSourceProgress:(id)a0;
- (void)callCompletionWithResult:(id)a0;
- (id)initWithTrackingIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
