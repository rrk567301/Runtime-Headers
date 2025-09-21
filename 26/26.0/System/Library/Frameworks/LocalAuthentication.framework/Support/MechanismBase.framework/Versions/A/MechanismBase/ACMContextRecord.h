@protocol LACContextExternalizing;

@interface ACMContextRecord : NSObject

@property (readonly, nonatomic) struct __ACMHandle { } *context;
@property (readonly, weak, nonatomic) id<LACContextExternalizing> cachedExternalizationDelegate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned int passphrasePurpose;

- (id)initWithACMContext:(struct __ACMHandle { } *)a0 cachedExternalizationDelegate:(id)a1;
- (void).cxx_destruct;

@end
