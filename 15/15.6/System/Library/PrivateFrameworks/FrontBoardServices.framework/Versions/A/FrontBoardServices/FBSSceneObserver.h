@class NSString, NSSet;
@protocol FBSSceneComponent, FBSSceneObserver;

@interface FBSSceneObserver : NSObject <FBSSceneObserver_Internal, FBSSceneObserverConfiguring, BSInvalidatable> {
    id<FBSSceneObserver> _observer;
    id<FBSSceneComponent> _component;
    unsigned long long _observerAddress;
    NSSet *_settings;
    NSSet *_clientSettings;
    NSSet *_actions;
    id /* block */ _settingsHandler;
    id /* block */ _clintSettingsHandler;
    id /* block */ _actionHandler;
    id /* block */ _invalidationHandler;
    char _respondsToHostHandle;
    char _respondsToSettings;
    char _respondsToClientSettings;
    char _respondsToActions;
    char _respondsToInvalidate;
    char _respondsToPrivateActions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)component;
- (id)initWithComponent:(id)a0;
- (id)initWithObserver:(id)a0;
- (id)observer;
- (void)clientSettings:(SEL)a0;
- (void)actionClasses:(id)a0;
- (void)actionHandler:(id /* block */)a0;
- (void)actions:(Class)a0;
- (void)clientSettingNames:(id)a0;
- (void)clientUpdateHandler:(id /* block */)a0;
- (void)invalidationHandler:(id /* block */)a0;
- (void)scene:(id)a0 didUpdateClientSettings:(id)a1;
- (void)scene:(id)a0 didUpdateHostHandle:(id)a1;
- (void)scene:(id)a0 didUpdateSettings:(id)a1;
- (id)scene:(id)a0 handleActions:(id)a1;
- (id)scene:(id)a0 handlePrivateActions:(id)a1;
- (void)sceneWillInvalidate:(id)a0;
- (void)settingNames:(id)a0;
- (void)settings:(SEL)a0;
- (void)updateHandler:(id /* block */)a0;

@end
