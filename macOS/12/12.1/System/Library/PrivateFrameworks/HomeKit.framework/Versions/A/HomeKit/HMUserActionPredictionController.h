@class _HMContext, NSArray, NSUUID;
@protocol HMUserActionPredictionControllerDelegate;

@interface HMUserActionPredictionController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) _HMContext *context;
@property (readonly, copy) NSArray *predictions;
@property (readonly, copy) NSUUID *UUID;
@property (weak) id<HMUserActionPredictionControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)configureWithContext:(id)a0;
- (void)fetchPredictionsWithCompletion:(id /* block */)a0;
- (BOOL)mergeWithOtherPredictionController:(id)a0 operations:(id)a1;

@end
