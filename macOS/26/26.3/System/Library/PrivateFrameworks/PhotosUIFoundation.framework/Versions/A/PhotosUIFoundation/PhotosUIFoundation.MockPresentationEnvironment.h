@class NSViewController;

@interface PhotosUIFoundation.MockPresentationEnvironment : NSObject <PXPresentationEnvironment> {
    void /* unknown type, empty encoding */ autoSelectedAlertActionStyle;
    void /* unknown type, empty encoding */ alertPresentationCount;
    void /* unknown type, empty encoding */ postPresentationHandler;
}

@property (nonatomic, readonly) BOOL canPushViewController;
@property (nonatomic, readonly) NSViewController *presentingViewController;

- (id)init;
- (BOOL)pushViewController:(id)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (BOOL)popToViewController:(id)a0 animated:(BOOL)a1;
- (id)presentAlertWithConfigurationHandler:(id /* block */)a0;
- (void)presentAlert:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAlertWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissAlertWithToken:(id)a0 withDelay:(double)a1 message:(id)a2 completionHandler:(id /* block */)a3;
- (void)dismissViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
