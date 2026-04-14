@class NSString, NSLock, NSMutableArray;

@interface EFInvocationToken : NSObject <EFInvocable> {
    NSLock *_lock;
    NSMutableArray *_blocks;
    BOOL _isInvoked;
}

@property (readonly, getter=isInvoked) BOOL invoked;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithLabel:(id)a0 invocationBlock:(id /* block */)a1;
+ (id)_descriptionString;
+ (id)tokenWithInvocationBlock:(id /* block */)a0;

- (void)invoke;
- (void)removeAllInvocationBlocks;
- (id)initWithInvocationBlock:(id /* block */)a0;
- (void)addInvocable:(id)a0;
- (id)initWithLabel:(id)a0;
- (id)_nts_consumeBlocks;
- (void).cxx_destruct;
- (id)init;
- (void)addInvocationBlock:(id /* block */)a0;

@end
