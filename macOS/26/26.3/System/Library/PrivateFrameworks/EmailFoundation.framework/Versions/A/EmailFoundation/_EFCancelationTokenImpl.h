@class NSString;

@interface _EFCancelationTokenImpl : EFInvocationToken <EFCancelableToken>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithLabel:(id)a0 cancelationBlock:(id /* block */)a1;
+ (id)tokenWithCancelationBlock:(id /* block */)a0;
+ (id)_descriptionString;

- (void)cancel;
- (void)addCancelable:(id)a0;
- (void)addCancelationBlock:(id /* block */)a0;
- (void)removeAllCancelationBlocks;

@end
