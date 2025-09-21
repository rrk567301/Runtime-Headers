@class NSString, NSArray;

@interface LNFetchAppShortcutParametersConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSString *appShortcutProviderMangledName;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *appShortcutSubstitutions;
@property (retain, nonatomic) NSArray *spans;
@property (retain, nonatomic) NSArray *parameterPresentationSubstitutions;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 appShortcutProviderMangledName:(id)a2 completionHandler:(id /* block */)a3;

@end
