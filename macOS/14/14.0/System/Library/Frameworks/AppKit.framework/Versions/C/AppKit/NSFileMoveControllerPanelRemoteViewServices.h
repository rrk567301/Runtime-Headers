@class NSMovePanel;

@interface NSFileMoveControllerPanelRemoteViewServices : NSFileMoveController {
    NSMovePanel *_movePanel;
}

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void)_beginForWindow:(id)a0 completionHandler:(id /* block */)a1;

@end
