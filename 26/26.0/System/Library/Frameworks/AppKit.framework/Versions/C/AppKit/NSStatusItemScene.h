@class NSString, FBSScene;

@interface NSStatusItemScene : NSScene <FBSSceneObserver> {
    FBSScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSettings:(id /* block */)a0;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (id)clientSettings;
- (void).cxx_destruct;
- (id)hostSettings;
- (void)sceneWillInvalidate:(id)a0;
- (void)updateSettings:(id /* block */)a0 transition:(id /* block */)a1;
- (void)updateStatusItemOnBackgroundThread:(id /* block */)a0;

@end
