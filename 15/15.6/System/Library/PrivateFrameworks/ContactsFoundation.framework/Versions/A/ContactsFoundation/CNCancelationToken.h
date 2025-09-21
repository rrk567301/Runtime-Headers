@class NSString, NSMutableArray;

@interface CNCancelationToken : NSObject <CNCancelable, CNCancelationToken> {
    char _isCanceled;
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
- (void)cancel;
- (void)performBlock:(id /* block */)a0;
- (char)isCanceled;
- (void)addCancelable:(id)a0;
- (void)addCancelationBlock:(id /* block */)a0;
- (void)callCancelationBlocks:(id)a0;
- (id)nts_cancel;

@end
