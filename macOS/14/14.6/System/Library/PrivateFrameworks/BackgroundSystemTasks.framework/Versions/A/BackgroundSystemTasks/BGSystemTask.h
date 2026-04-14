@class NSString, NSObject;
@protocol OS_os_transaction;

@interface BGSystemTask : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ expirationAckHandler;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (nonatomic) BOOL expiring;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ expirationHandler;

+ (id)logger;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)setTaskCompleted;
- (void)clearLocked;
- (BOOL)reportTaskWorkloadProgress:(unsigned long long)a0 completed:(unsigned long long)a1 category:(unsigned long long)a2 subCategory:(id)a3 error:(id *)a4;
- (BOOL)setTaskExpiredWithRetryAfter:(double)a0 error:(id *)a1;

@end
