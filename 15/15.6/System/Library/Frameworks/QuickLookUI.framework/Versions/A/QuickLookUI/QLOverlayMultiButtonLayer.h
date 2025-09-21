@class NSArray, NSMutableArray;

@interface QLOverlayMultiButtonLayer : QLOverlayBaseButtonLayer {
    NSMutableArray *_imageLayers;
}

@property (readonly) unsigned long long clickedIndex;
@property (retain) NSArray *images;
@property char leftEnabled;
@property char rightEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_beginMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)_enableClickAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (char)_enabledAtIndex:(unsigned long long)a0;
- (void)_endMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setEnabled:(char)a0 atIndex:(unsigned long long)a1;

@end
