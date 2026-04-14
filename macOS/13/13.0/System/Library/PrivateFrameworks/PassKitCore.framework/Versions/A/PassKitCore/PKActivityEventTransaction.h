@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)eventType;
- (BOOL)isEqualToActivityEvent:(id)a0;
- (id)initWithTransaction:(id)a0 unread:(BOOL)a1;

@end
