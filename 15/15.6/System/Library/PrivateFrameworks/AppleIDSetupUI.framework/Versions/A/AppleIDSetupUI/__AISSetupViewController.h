@interface __AISSetupViewController : NSViewController {
    void /* unknown type, empty encoding */ __shouldAutoDismiss;
    void /* unknown type, empty encoding */ __isPreEstablishedClient;
    void /* unknown type, empty encoding */ hostingController;
}

@property (nonatomic) char shouldAutoDismiss;
@property (nonatomic) char isPreEstablishedClient;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWithContext:(id)a0 dontSuggestUserAction:(id)a1 skipAction:(id)a2 shouldAutoDismiss:(char)a3 isPreEstablishedClient:(char)a4 reportHandler:(id /* block */)a5;

@end
