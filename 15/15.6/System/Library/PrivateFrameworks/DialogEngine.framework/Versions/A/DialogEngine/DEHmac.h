@class NSData;

@interface DEHmac : NSObject <DEWriter>

@property (nonatomic) struct { unsigned int ctx[96]; } context;
@property (retain, nonatomic) NSData *hmac;

+ (char)verify:(id)a0 computed:(id)a1;

- (void).cxx_destruct;
- (void)close;
- (void)writeData:(id)a0;
- (id)initWithKey:(id)a0 iv:(id)a1;

@end
