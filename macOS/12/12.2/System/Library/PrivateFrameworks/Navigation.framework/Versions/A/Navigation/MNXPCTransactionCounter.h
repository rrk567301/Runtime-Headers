@class NSLock, NSObject;
@protocol OS_os_transaction;

@interface MNXPCTransactionCounter : NSObject {
    NSObject<OS_os_transaction> *_osTransaction;
    NSLock *_countLock;
    unsigned long long _count;
}

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)decrement;
- (void)increment:(id)a0;

@end
