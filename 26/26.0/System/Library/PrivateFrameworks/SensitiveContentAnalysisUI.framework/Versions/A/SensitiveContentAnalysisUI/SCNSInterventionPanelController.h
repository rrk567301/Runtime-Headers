@class SCUIRemoteInterventionViewController, NSString, NSDictionary, NSPanel, NSWindow;
@protocol SCUIInterventionViewControllerDelegate;

@interface SCNSInterventionPanelController : NSObject <SCUIInterventionContainerFacade, SCUIInterventionContainer>

@property (weak, nonatomic) NSWindow *displayWindow;
@property (retain, nonatomic) NSPanel *sheetWindow;
@property (retain, nonatomic) SCUIRemoteInterventionViewController *remoteInterventionController;
@property (retain, nonatomic) id typeErasedConfig;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long workflow;
@property (weak, nonatomic) id<SCUIInterventionViewControllerDelegate> interventionDelegate;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_controllerWithAnalysis:(id)a0 options:(long long)a1 contextDictionary:(id)a2 error:(id *)a3;
+ (id)_controllerWithAnalysis:(id)a0 workflow:(long long)a1 contextDictionary:(id)a2 error:(id *)a3;
+ (id)controllerWithAnalysis:(id)a0 options:(long long)a1 contextDictionary:(id)a2 error:(id *)a3;
+ (id)controllerWithAnalysis:(id)a0 workflow:(long long)a1 contextDictionary:(id)a2 error:(id *)a3;
+ (id)controllerWithWorkflow:(long long)a0 contextDictionary:(id)a1;

- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)a0;
- (id)initWithWorkflow:(long long)a0 contextDictionary:(id)a1;
- (void)dismissInterventionFacadeWithCompletionHandler:(id /* block */)a0;
- (id)initWithTypeErasedConfig:(id)a0;
- (id)initWithWorkflow:(long long)a0 contextDictionary:(id)a1 type:(long long)a2;

@end
