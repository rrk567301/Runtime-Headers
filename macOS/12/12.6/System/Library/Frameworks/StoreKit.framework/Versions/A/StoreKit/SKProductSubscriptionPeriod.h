@interface SKProductSubscriptionPeriod : NSObject {
    id _internal;
}

@property (readonly, nonatomic) unsigned long long numberOfUnits;
@property (readonly, nonatomic) unsigned long long unit;

- (id)init;
- (void).cxx_destruct;
- (id)initWithISO8601String:(id)a0;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)_setNumberOfUnits:(unsigned long long)a0;
- (void)_setUnit:(unsigned long long)a0;

@end
