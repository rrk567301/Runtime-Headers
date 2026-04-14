@class NSLock, NSObject;
@protocol OS_os_transaction;

@interface MNXPCTransactionCounter : NSObject {
    NSObject<OS_os_transaction> *_osTransaction;
    NSLock *_countLock;
    unsigned long long _count;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)decrement;
- (void)increment:(id)a0;

@end
