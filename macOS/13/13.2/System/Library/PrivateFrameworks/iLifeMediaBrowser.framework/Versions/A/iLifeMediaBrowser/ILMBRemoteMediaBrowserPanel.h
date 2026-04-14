@class PBOXRemoteMediaBrowserPanel;

@interface ILMBRemoteMediaBrowserPanel : NSObject {
    PBOXRemoteMediaBrowserPanel *_browserPanel;
}

+ (id)sharedInstance;

- (id)init;
- (void)setBrowserType:(unsigned long long)a0;
- (unsigned long long)browserType;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setAutosaveName:(id)a0;
- (id)autosaveName;
- (void)showPanel;
- (void)toggle;
- (void)hidePanel;

@end
