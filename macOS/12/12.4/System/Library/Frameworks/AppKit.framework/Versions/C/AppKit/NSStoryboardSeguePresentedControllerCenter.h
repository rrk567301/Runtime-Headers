@class NSMapTable;

@interface NSStoryboardSeguePresentedControllerCenter : NSObject

@property (retain) NSMapTable *registeredControllers;

+ (id)defaultCenter;

- (void)dealloc;
- (id)init;
- (id)controllerWithIdentifier:(id)a0;
- (void)registerController:(id)a0 withOptions:(id)a1;
- (void)unregisterControllerWithOptions:(id)a0;

@end
