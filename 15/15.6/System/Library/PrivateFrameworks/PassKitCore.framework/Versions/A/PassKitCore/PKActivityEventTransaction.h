@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)eventType;
- (id)initWithTransaction:(id)a0 unread:(char)a1;
- (char)isEqualToActivityEvent:(id)a0;

@end
