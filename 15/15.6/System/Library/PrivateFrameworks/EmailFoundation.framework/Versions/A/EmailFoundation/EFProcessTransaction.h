@class NSObject;
@protocol OS_os_transaction;

@interface EFProcessTransaction : NSObject {
    NSObject<OS_os_transaction> *_transaction;
}

+ (id)transactionWithDescription:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (char)extend;
- (id)initWithDescription:(id)a0;

@end
