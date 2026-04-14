@class NSString, LNAction;

@interface LNFetchActionForAutoShortcutPhraseOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *autoShortcutPhrase;
@property (retain, nonatomic) LNAction *result;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 autoShortcutPhrase:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
