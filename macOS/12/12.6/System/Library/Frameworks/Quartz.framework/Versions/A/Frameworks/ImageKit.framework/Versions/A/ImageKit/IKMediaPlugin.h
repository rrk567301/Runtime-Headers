@interface IKMediaPlugin : NSObject

+ (void)setup;
+ (id)pluginForType:(id)a0;
+ (void)registerPlugin:(id)a0 forType:(id)a1;

- (void)stopPlayer:(id)a0;
- (BOOL)supportsPlaying;
- (id)playerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forRepresentationInstance:(id)a1 forCell:(id)a2;
- (void)startPlayer:(id)a0;
- (struct CGImage { } *)imageForRepresentationInstance:(id)a0 forCell:(id)a1;

@end
