@interface TextInputUI.TUITextComposerClientWrapper : NSObject {
    void /* unknown type, empty encoding */ taskCache;
    void /* unknown type, empty encoding */ internalTextComposerClient;
}

+ (BOOL)isGMAvailableForMailReply;
+ (BOOL)isGMAvailableForMailReplyLongFormBasic;
+ (BOOL)isGMAvailableForMessagesReply;
+ (BOOL)isGMAvailableWithUseCase:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cancelRequestWithToken:(unsigned long long)a0 forClient:(id)a1;
- (unsigned long long)generateRequestToken;
- (void)requestSmartRepliesWithContext:(id)a0 inputContextHistory:(id)a1 conversationType:(long long)a2 smartReplyType:(long long)a3 candidateString:(id)a4 options:(id)a5 completion:(id /* block */)a6;

@end
