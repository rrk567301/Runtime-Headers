@interface SiriAppLaunchUIFramework.Coordinator : NSObject <SearchUICardViewDelegate, SearchUIFeedbackDelegate> {
    void /* unknown type, empty encoding */ observableHeight;
    void /* unknown type, empty encoding */ adamIds;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ lockupViewEngagedHandler;
    void /* unknown type, empty encoding */ lockupEventManagers;
}

- (id)init;
- (void).cxx_destruct;
- (void)lockupViewEngagedForAppIdentifier:(id)a0;
- (void)lockupViewForAppIdentifier:(id)a0 didChangeState:(id)a1;
- (void)lockupViewForAppIdentifier:(id)a0 didFailRequestWithError:(id)a1;
- (void)cardViewController:(id)a0 preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;

@end
