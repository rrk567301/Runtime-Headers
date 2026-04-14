@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)initialize;
+ (void)_startTrackingTransaction:(id)a0;
+ (id)openXPCTransactionStatus;
+ (id)transaction:(const char *)a0;
+ (void)_stopTrackingTransaction:(id)a0;

- (void)stillAlive;
- (id)initWithIdentifier:(const char *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_statusDescription;
- (void)dealloc;

@end
