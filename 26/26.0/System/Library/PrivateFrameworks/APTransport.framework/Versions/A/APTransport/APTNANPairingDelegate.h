@class NSString;

@interface APTNANPairingDelegate : NSObject <WiFiAwareDataSessionPairingDelegate> {
    id /* block */ _handleAuthorizationRequestBlock;
    struct __CFString { } *_logContext;
}

@property (nonatomic) unsigned char handledPairingRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)pairingRequestStartedForDataSession:(id)a0 passphraseInputCompletionHandler:(id /* block */)a1;
- (void)pairingRequestStartedForDataSession:(id)a0 pinCodeInputCompletionHandler:(id /* block */)a1;
- (void)handlePairingRequestOfType:(struct __CFString { } *)a0 withInputCompletionHandler:(id /* block */)a1;
- (id)initWithHandleAuthorizationRequestBlock:(id /* block */)a0 logContext:(struct __CFString { } *)a1;

@end
