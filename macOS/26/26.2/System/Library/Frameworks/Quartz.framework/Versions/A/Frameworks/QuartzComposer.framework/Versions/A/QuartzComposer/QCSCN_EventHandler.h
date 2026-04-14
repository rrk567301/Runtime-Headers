@class QCSCN_View;

@interface QCSCN_EventHandler : NSObject {
    id _reserved;
}

@property (readonly) QCSCN_View *view;

- (BOOL)mouseDown:(id)a0;
- (void)setView:(id)a0;
- (BOOL)mouseUp:(id)a0;
- (id)init;
- (BOOL)mouseDragged:(id)a0;
- (void)dealloc;
- (BOOL)magnifyWithEvent:(id)a0;
- (BOOL)rotateWithEvent:(id)a0;
- (BOOL)scrollWheel:(id)a0;
- (void)viewWillDraw;
- (void)cameraDidChange;
- (void)sceneWillChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)viewDidDraw;
- (BOOL)wantsRedraw;

@end
