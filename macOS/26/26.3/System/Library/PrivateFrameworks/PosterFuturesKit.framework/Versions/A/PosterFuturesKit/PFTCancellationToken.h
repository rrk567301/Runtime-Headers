@class NSString, NSMutableArray;

@interface PFTCancellationToken : NSObject <BSCancellable, PFTCancellationToken> {
    BOOL _isCancelled;
    NSMutableArray *_cancelationBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithCancellationBlock:(id /* block */)a0;
+ (id)tokenWrappingCancellable:(id)a0;

- (void)cancel;
- (BOOL)isCancelled;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)nts_cancel;
- (void)addCancellable:(id)a0;
- (void)addCancellationBlock:(id /* block */)a0;
- (void)callCancellationBlocks:(id)a0;

@end
