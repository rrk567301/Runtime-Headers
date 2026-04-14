@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) BOOL committed;

- (void).cxx_destruct;
- (id)_init;
- (void)commit;
- (void)reset;
- (BOOL)isMutable;
- (void)associateWithBackingStore:(id)a0;

@end
