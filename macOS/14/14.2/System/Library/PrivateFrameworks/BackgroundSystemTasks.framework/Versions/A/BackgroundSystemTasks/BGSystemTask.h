@class NSString, NSObject;
@protocol OS_os_transaction;

@interface BGSystemTask : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ expirationAckHandler;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (nonatomic) BOOL expiring;
@property (readonly, copy) NSString *identifier;
@property (copy) id /* block */ expirationHandler;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)setTaskCompleted;
- (BOOL)setTaskExpiredWithRetryAfter:(double)a0 error:(id *)a1;

@end
