@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) BOOL committed;

- (void)commit;
- (BOOL)isMutable;
- (void)reset;
- (id)initInternal;
- (void).cxx_destruct;
- (void)associateWithBackingStore:(id)a0;

@end
