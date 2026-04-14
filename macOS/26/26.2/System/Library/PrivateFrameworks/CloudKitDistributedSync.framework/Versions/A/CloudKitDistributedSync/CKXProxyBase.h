@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) BOOL committed;

- (void)commit;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)isMutable;
- (id)initInternal;
- (void)associateWithBackingStore:(id)a0;

@end
