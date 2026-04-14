@class NSArray, IMKSimulatorInputModeSelectorFloatingPanel;

@interface IMKSimulatorInputModeSelector : NSObject {
    IMKSimulatorInputModeSelectorFloatingPanel *_floatingPanel;
}

@property (retain, nonatomic) NSArray *inputModeURLs;
@property (readonly, copy, nonatomic) NSArray *inputModeLabels;

+ (id)sharedInputModeSelector;

- (id)init;
- (void)dealloc;
- (void)selectInputModeUsingLabel:(id)a0;

@end
