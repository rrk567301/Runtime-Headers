@class NSString;

@interface _EXSceneConfigutration : NSObject <_EXSceneConfigurationProviding>

@property (retain) NSString *sceneIdentifier;
@property (retain) NSString *storyboardName;
@property (retain) NSString *viewControllerClassName;
@property (readonly) Class viewControllerClass;
@property (retain) NSString *extensionPointViewControllerClassName;
@property (readonly) Class extensionPointViewControllerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (Class)extensionPointViewControllerClass;
- (Class)viewControllerClass;

@end
