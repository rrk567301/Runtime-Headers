@interface MUURLShorteningSession : NSObject {
    void /* unknown type, empty encoding */ originalURLProvider;
    void /* unknown type, empty encoding */ internalShorteningSession;
    void /* unknown type, empty encoding */ logger;
}

- (void).cxx_destruct;
- (id)init;
- (void)preload;
- (id)initWithOriginalURLProvider:(id /* block */)a0;
- (id)initWithOriginalURLProvider:(id /* block */)a0 configuration:(id)a1;
- (void)shortURLIfPresentWithCompletion:(id /* block */)a0;
- (void)shortenWithCompletion:(id /* block */)a0;

@end
