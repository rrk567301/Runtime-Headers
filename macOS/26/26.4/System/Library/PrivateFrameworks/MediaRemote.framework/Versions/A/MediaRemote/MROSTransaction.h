@class NSString, NSObject;
@protocol OS_os_transaction;

@interface MROSTransaction : NSObject {
    NSObject<OS_os_transaction> *_containedTransaction;
}

@property (readonly, nonatomic) NSString *transactionName;

- (void)invalidateTransaction;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)description;

@end
