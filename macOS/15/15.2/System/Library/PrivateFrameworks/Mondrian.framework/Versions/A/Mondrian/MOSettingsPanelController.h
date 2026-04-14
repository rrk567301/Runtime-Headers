@class NSTextField, MOMediaView, NSView, NSArrayController, NSMutableArray;

@interface MOSettingsPanelController : NSWindowController

@property (retain) NSArrayController *layoutArrayController;
@property (retain) NSArrayController *cellArrayController;
@property (retain) NSArrayController *headerArrayController;
@property (retain) NSArrayController *colorArrayController;
@property (retain) NSTextField *liveScrollingAutomationLapsTextField;
@property (retain) NSTextField *liveScrollingAutomationStepsTextField;
@property (retain) NSView *optionsView;
@property (weak, nonatomic) MOMediaView *mediaView;
@property (retain) NSMutableArray *layoutPresets;
@property (retain) NSMutableArray *cellRepresentations;
@property (retain) NSMutableArray *headerRepresentations;
@property (retain) NSMutableArray *colorBackgrounds;

+ (id)panelControllerForMediaView:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)close:(id)a0;
- (void)_setup;
- (void)open:(id)a0;
- (void)windowDidLoad;
- (void)_setupLayoutOptions;
- (void)automateLiveScrollingWithLapsAndSteps:(id)a0;
- (void)automateLiveScrollingWithRecording:(id)a0;
- (void)changeCellRepresentation:(id)a0;
- (void)changeColorBackground:(id)a0;
- (void)changeHeaderRepresentation:(id)a0;
- (void)changeLayoutPreset:(id)a0;
- (void)clearMonitoringStatistics:(id)a0;
- (void)invalidateDataSourceMemory:(id)a0;
- (void)invalidatePrefetchMemory:(id)a0;
- (void)registerCellRepresentation:(Class)a0 withName:(id)a1;
- (void)registerColorBackground:(id)a0 withName:(id)a1;
- (void)registerHeaderRepresentation:(Class)a0 withName:(id)a1;
- (void)registerLayoutPreset:(id)a0 withName:(id)a1;

@end
