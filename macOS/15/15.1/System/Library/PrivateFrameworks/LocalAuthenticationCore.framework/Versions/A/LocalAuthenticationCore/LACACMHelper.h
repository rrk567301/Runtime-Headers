@class NSData;

@interface LACACMHelper : NSObject {
    BOOL _contextOwner;
}

@property (nonatomic) struct __ACMHandle { } *acmContext;
@property (readonly, nonatomic) NSData *externalizedContext;

+ (id)createACMContext;

- (void)dealloc;
- (id)initWithExternalizedContext:(id)a0;
- (id)initWithACMContext:(struct __ACMHandle { } *)a0;
- (id)exchangeControlData:(id)a0 error:(id *)a1;
- (id)initAndCreateContext;
- (BOOL)setVariable:(unsigned int)a0 value:(id)a1 error:(id *)a2;

@end
