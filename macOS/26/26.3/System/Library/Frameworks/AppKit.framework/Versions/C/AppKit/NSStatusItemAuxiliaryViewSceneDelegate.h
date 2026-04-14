@class NSString;

@interface NSStatusItemAuxiliaryViewSceneDelegate : NSObject <NSSceneDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneDidDisconnect:(id)a0;
- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (id)init;

@end
