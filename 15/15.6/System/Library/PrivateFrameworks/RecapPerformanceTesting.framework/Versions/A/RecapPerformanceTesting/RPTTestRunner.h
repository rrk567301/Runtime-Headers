@class RCPInlinePlayer, RPTInteractionOptions, RPTSettings;
@protocol RPTTestRunnerDelegate;

@interface RPTTestRunner : NSObject

@property (retain, nonatomic) RPTSettings *settings;
@property (readonly, retain, nonatomic) RCPInlinePlayer *inlinePlayer;
@property (retain, nonatomic) RPTInteractionOptions *interactionOptions;
@property (weak, nonatomic) id<RPTTestRunnerDelegate> delegate;

+ (void)runTestWithParameters:(id)a0;
+ (void)runTestWithParameters:(id)a0 delegate:(id)a1;
+ (char)isRecapAvailable;
+ (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;
+ (void)runTestWithParameters:(id)a0 resultHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (void)runTestWithParameters:(id)a0;
- (void)_runTestWithParameters:(id)a0 retries:(long long)a1;
- (char)checkTestRequirementsWithError:(out id *)a0;
- (void)_endSerializedRunner;
- (void)_failWithParameters:(id)a0 error:(id)a1;
- (void)_finishWithParameters:(id)a0;
- (char)_isReadyForRunningParameters:(id)a0 error:(id *)a1;
- (char)_managePPTLifetimeEvent:(long long)a0 forParameters:(id)a1;
- (void)_runTestWithParameters:(id)a0;
- (char)_startSerializedRunnerWithError:(id *)a0;
- (id)initWithInteractionOptions:(id)a0;
- (void)playInteraction:(id)a0 completionHandler:(id /* block */)a1;
- (void)runTestWithParameters:(id)a0 resultHandler:(id /* block */)a1;

@end
