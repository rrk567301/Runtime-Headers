@class NSObject;
@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)transactionWithDescription:(id)a0;

- (void)invalidate;
- (BOOL)extend;
- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
