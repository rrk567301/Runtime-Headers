@class NSThread, NSObject;
@protocol OS_voucher;

@interface __HMFThreadContext : HMFObject

@property (class, readonly, copy) __HMFThreadContext *currentContext;

@property (readonly) NSThread *thread;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (nonatomic) BOOL shouldRestoreVoucher;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)__init;

@end
