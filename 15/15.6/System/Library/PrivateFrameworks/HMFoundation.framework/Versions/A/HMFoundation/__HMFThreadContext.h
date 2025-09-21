@class NSThread, NSObject;
@protocol OS_voucher;

@interface __HMFThreadContext : HMFObject

@property (class, readonly, copy) __HMFThreadContext *currentContext;

@property (readonly) NSThread *thread;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSObject<OS_voucher> *voucher;
@property (nonatomic) char shouldRestoreVoucher;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)__init;

@end
