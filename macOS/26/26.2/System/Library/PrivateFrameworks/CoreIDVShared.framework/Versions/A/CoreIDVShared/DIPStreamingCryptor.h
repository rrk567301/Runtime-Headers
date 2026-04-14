@interface DIPStreamingCryptor : NSObject {
    struct _CCCryptor { } *_cryptor;
}

- (id)initWithKey:(id)a0;
- (id)finish;
- (void)addAuthParameter:(id)a0;
- (void)addIVParameter:(id)a0;
- (id)encryptBuffer:(id)a0;

@end
