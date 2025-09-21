@class QCSCN_View;

@interface QCSCN_EventHandler : NSObject {
    id _reserved;
}

@property (readonly) QCSCN_View *view;

- (void)dealloc;
- (id)init;
- (void)setView:(id)a0;
- (char)magnifyWithEvent:(id)a0;
- (char)mouseDown:(id)a0;
- (char)mouseDragged:(id)a0;
- (char)mouseUp:(id)a0;
- (char)rotateWithEvent:(id)a0;
- (char)scrollWheel:(id)a0;
- (void)viewWillDraw;
- (void)cameraDidChange;
- (void)sceneWillChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)viewDidDraw;
- (char)wantsRedraw;

@end
