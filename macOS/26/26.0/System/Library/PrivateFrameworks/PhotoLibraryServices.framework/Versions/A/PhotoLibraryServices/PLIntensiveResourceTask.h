@class NSString, NSProgress, NSMutableArray;
@protocol PLIntensiveResourceTaskDelegate;

@interface PLIntensiveResourceTask : NSObject <PLIntensiveResourceTaskResponderDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned long long _lock_state;
    NSMutableArray *_lock_responders;
    NSProgress *_lock_progress;
    id /* block */ _lock_startBlock;
}

@property (weak, nonatomic) id<PLIntensiveResourceTaskDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *trackingIdentifier;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskForGeneratingDeferredAdjustmentForAsset:(id)a0 trackingIdentifier:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 reason:(id)a4 allowCancellationByService:(BOOL)a5;

- (void)finishWithResult:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (BOOL)_lock_canAcceptResponders;
- (BOOL)_lock_transitionToState:(unsigned long long)a0;
- (BOOL)addResponder:(id)a0;
- (id)initWithAssetUUID:(id)a0 resourceRecipeID:(unsigned int)a1 trackingIdentifier:(id)a2 startBlock:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 trackingIdentifier:(id)a1 startBlock:(id /* block */)a2;
- (void)taskResponderDidCancel:(id)a0;

@end
