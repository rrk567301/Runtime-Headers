@class NSError, AISSafetySettingsContext;

@interface AISSafetySettingsFlowPresenter : NSObject {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ stateController;
    void /* unknown type, empty encoding */ selectedAgeRange;
    void /* unknown type, empty encoding */ ageSelectionViewController;
    void /* unknown type, empty encoding */ readyForUserViewController;
    void /* unknown type, empty encoding */ completedSafetySettings;
    void /* unknown type, empty encoding */ lastView;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, weak) void /* function */ host;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSafetySettingsContext:(id)a0;
- (id)initWithSafetySettingsContext:(id)a0 host:(id)a1;
- (void)shouldPresentSafetySettingsWithContext:(AISSafetySettingsContext *)a0 completion:(void (^)(BOOL, NSError *))a1;
- (id)templateViewWithContext:(id)a0;

@end
