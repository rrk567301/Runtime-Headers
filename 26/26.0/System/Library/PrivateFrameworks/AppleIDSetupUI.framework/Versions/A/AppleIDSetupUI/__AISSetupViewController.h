@interface __AISSetupViewController : NSViewController {
    void /* unknown type, empty encoding */ __shouldAutoDismiss;
    void /* unknown type, empty encoding */ __isPreEstablishedClient;
    void /* unknown type, empty encoding */ hostingController;
}

@property (nonatomic) BOOL shouldAutoDismiss;
@property (nonatomic) BOOL isPreEstablishedClient;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 dontSuggestUserAction:(id)a1 skipAction:(id)a2 shouldAutoDismiss:(BOOL)a3 isPreEstablishedClient:(BOOL)a4 reportHandler:(id /* block */)a5;

@end
