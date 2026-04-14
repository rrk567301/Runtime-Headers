@class NSString;
@protocol _EXSceneConfigurationProviding;

@interface _EXExtensionViewController : NSViewController <_EXConnectionHandler>

@property (retain) id<_EXSceneConfigurationProviding> sceneConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)makeContentViewController;

@end
