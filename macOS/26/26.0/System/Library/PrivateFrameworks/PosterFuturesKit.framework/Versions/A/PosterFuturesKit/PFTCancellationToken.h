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

- (BOOL)isCancelled;
- (void)cancel;
- (void)performBlock:(id /* block */)a0;
- (id)init;
- (id)nts_cancel;
- (void).cxx_destruct;
- (void)addCancellable:(id)a0;
- (void)addCancellationBlock:(id /* block */)a0;
- (void)callCancellationBlocks:(id)a0;

@end
