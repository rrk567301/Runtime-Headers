@class NSViewController;
@protocol AISViewControllerPresentationHandlerProtocol, AISChildSetupStoreProtocol;

@interface AISChildSetupPresenter : NSObject {
    void /* unknown type, empty encoding */ settings;
    void /* unknown type, empty encoding */ currentStep;
    void /* unknown type, empty encoding */ childSetupAnalyticsEvent;
    void /* unknown type, empty encoding */ analytics;
    void /* unknown type, empty encoding */ biome;
    void /* unknown type, empty encoding */ familyCircleProvider;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) NSViewController<AISViewControllerPresentationHandlerProtocol> *presentationHandler;
@property (nonatomic, readonly) id<AISChildSetupStoreProtocol> childSetupStore;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startFlowWithViewControllerPresentationHandler:(id)a0;

@end
