@class NSObject;
@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)transactionWithDescription:(id)a0;

- (void)invalidate;
- (id)initWithDescription:(id)a0;
- (id)description;
- (BOOL)extend;
- (void).cxx_destruct;

@end
