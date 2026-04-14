@class QCSCN_View;

@interface QCSCN_EventHandler : NSObject {
    id _reserved;
}

@property (readonly) QCSCN_View *view;

- (void)dealloc;
- (id)init;
- (void)setView:(id)a0;
- (BOOL)mouseDown:(id)a0;
- (void)viewWillDraw;
- (BOOL)scrollWheel:(id)a0;
- (BOOL)mouseDragged:(id)a0;
- (BOOL)mouseUp:(id)a0;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)wantsRedraw;
- (void)viewDidDraw;
- (void)cameraWillChange;
- (void)cameraDidChange;
- (void)sceneWillChange;
- (void)sceneDidChange;

@end
