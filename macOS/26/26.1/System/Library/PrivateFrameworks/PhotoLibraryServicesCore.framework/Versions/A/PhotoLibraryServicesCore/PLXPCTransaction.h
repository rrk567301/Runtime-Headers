@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)_stopTrackingTransaction:(id)a0;
+ (void)initialize;
+ (void)_startTrackingTransaction:(id)a0;
+ (id)openXPCTransactionStatus;
+ (id)transaction:(const char *)a0;

- (void)stillAlive;
- (id)_statusDescription;
- (id)initWithIdentifier:(const char *)a0;
- (id)description;
- (void)dealloc;
- (void).cxx_destruct;

@end
