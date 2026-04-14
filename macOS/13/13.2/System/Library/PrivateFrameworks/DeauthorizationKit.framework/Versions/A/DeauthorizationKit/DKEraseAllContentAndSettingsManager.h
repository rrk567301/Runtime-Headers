@class NSArray, NSWindow, NSDictionary;
@protocol DKAuthDelegate;

@interface DKEraseAllContentAndSettingsManager : NSObject

@property (retain) NSArray *scheduledTasks;
@property (retain) NSArray *preliminaryCheckTasks;
@property (weak) id<DKAuthDelegate> delegate;
@property (retain) NSWindow *hostWindow;
@property BOOL skipSystemModalBlur;
@property BOOL considerPreliminaryChecksNonFatal;
@property (retain) NSDictionary *options;
@property (copy) id /* block */ tasksBeganCompletion;

+ (id)sharedManager;
+ (BOOL)hardwareIsSupported;
+ (BOOL)deviceIsSupported;
+ (BOOL)deviceIsSupportedAndMDMInitiated:(BOOL)a0;
+ (BOOL)canProceedForMDMWithError:(id *)a0;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)requiredPretaskIdentifiers;
- (id)requiredTaskIdentifiers;
- (id)taskForIdentifier:(id)a0;
- (id)initWithDelegate:(id)a0 withWindow:(id)a1;
- (id)initWithDelegate:(id)a0 withWindow:(id)a1 withOptions:(id)a2;
- (void)_doPreliminaryChecksWithCompletion:(id /* block */)a0;
- (void)deauthorizeEverythingWithProgressCompletion:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_runTasksWithCompletion:(id /* block */)a0 progressCompletion:(id /* block */)a1;

@end
