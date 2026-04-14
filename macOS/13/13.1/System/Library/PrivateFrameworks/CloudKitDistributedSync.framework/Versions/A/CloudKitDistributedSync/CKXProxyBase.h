@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) BOOL committed;

- (id)_init;
- (void).cxx_destruct;
- (void)commit;
- (void)reset;
- (BOOL)isMutable;
- (void)associateWithBackingStore:(id)a0;

@end
