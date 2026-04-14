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

- (id)init;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)cancel;
- (BOOL)isCanceled;
- (id)nts_cancel;
- (void)addCancelationBlock:(id /* block */)a0;
- (void)addCancelable:(id)a0;
- (void)callCancelationBlocks:(id)a0;

@end
