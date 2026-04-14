@class NSString;

@interface SCROBrailleUILiveSpeechManager : NSObject {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ $__lazy_storage_$_synth;
}

- (id)initWithClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)speak:(NSString *)a0 completionHandler:(void (^)(void))a1;

@end
