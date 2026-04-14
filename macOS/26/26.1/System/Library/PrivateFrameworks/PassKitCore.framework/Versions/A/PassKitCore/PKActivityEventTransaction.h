@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction;

- (id)eventType;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0 unread:(BOOL)a1;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
