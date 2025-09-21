@class CKXBackingStore;

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore;
@property (nonatomic) long long scope;
@property (readonly, nonatomic) char committed;

- (void).cxx_destruct;
- (void)commit;
- (void)reset;
- (char)isMutable;
- (id)initInternal;
- (void)associateWithBackingStore:(id)a0;

@end
