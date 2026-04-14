@class NSString, NSMutableArray;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken> {
    BOOL _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithCancelationBlock:(id /* block */)a0;
+ (id)tokenWrappingCancelable:(id)a0;

- (BOOL)isCanceled;
- (void)cancel;
- (void)callCancelationBlocks:(id)a0;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (void)addCancelable:(id)a0;
- (void).cxx_destruct;
- (void)addCancelationBlock:(id /* block */)a0;
- (id)nts_cancel;

@end
