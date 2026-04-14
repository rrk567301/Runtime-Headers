@interface SiriAppLaunchUIFramework.AppResultsViewFeedbackDelegate : NSObject <SearchUIFeedbackDelegate> {
    void /* unknown type, empty encoding */ lockupViewEngagedHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)lockupViewEngagedForAppIdentifier:(id)a0;
- (void)lockupViewForAppIdentifier:(id)a0 didChangeState:(id)a1;
- (void)lockupViewForAppIdentifier:(id)a0 didFailRequestWithError:(id)a1;

@end
