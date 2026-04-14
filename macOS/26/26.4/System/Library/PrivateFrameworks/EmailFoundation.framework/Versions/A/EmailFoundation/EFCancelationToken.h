@class NSString, _EFCancelationTokenImpl;

@interface EFCancelationToken : NSObject <EFCancelableToken, EFInvocable> {
    _EFCancelationTokenImpl *_impl;
}

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithCancelationBlock:(id /* block */)a0;
+ (id)tokenWithLabel:(id)a0 cancelationBlock:(id /* block */)a1;

- (void)invoke;
- (void)cancel;
- (id)initWithLabel:(id)a0;
- (void)removeAllCancelationBlocks;
- (void).cxx_destruct;
- (void)addCancelable:(id)a0;
- (id)init;
- (void)addCancelationBlock:(id /* block */)a0;
- (void)dealloc;

@end
