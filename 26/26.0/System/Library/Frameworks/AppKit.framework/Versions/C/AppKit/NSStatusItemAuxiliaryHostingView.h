@class NSStatusItemHost, NSSceneHostingController, NSString;

@interface NSStatusItemAuxiliaryHostingView : NSView <NSSceneHostingControllerDelegate> {
    NSString *_name;
}

@property (readonly) NSSceneHostingController *controller;
@property (readonly, weak) NSStatusItemHost *statusItemHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (id)_initWithHostingController:(id)a0 statusItemHost:(id)a1 name:(id)a2;
- (void)didInvalidateSceneHostingController:(id)a0;

@end
