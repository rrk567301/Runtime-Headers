@class NSString, AFSafetyBlock;
@protocol SVXTaskTracking;

@interface SVXAudioSessionAssertion : NSObject {
    AFSafetyBlock *_relinquishHandler;
}

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) id<SVXTaskTracking> taskTracker;

- (void)relinquish;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReason:(id)a0 taskTracker:(id)a1 relinquishHandler:(id /* block */)a2;

@end
