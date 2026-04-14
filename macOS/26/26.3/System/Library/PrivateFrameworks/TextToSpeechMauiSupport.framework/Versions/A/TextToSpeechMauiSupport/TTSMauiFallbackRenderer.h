@interface TTSMauiFallbackRenderer : NSObject <TTSFallbackRenderer> {
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ queue;
}

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 language:(id)a1;
- (void)render:(id)a0 callback:(id /* block */)a1;

@end
