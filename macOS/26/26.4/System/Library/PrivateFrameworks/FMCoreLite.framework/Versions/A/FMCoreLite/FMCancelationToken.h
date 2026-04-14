@class NSString, NSMutableArray;

@interface FMCancelationToken : NSObject <FMCancelable> {
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithCancelationBlock:(id /* block */)a0;
+ (id)tokenWrappingCancelable:(id)a0;

- (void)callCancelationBlocks:(id)a0;
- (id)nts_cancel;
- (void)cancel;
- (BOOL)isCanceled;
- (void).cxx_destruct;
- (void)addCancelable:(id)a0;
- (id)init;
- (void)addCancelationBlock:(id /* block */)a0;

@end
