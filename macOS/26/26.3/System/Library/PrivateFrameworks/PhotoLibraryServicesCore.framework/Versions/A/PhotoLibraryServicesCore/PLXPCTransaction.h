@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)initialize;
+ (id)openXPCTransactionStatus;
+ (void)_startTrackingTransaction:(id)a0;
+ (void)_stopTrackingTransaction:(id)a0;
+ (id)transaction:(const char *)a0;

- (void)stillAlive;
- (id)initWithIdentifier:(const char *)a0;
- (id)_statusDescription;
- (id)description;
- (void).cxx_destruct;
- (void)dealloc;

@end
