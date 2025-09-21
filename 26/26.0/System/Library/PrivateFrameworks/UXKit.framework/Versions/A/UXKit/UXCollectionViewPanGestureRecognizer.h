@class NSEvent;

@interface UXCollectionViewPanGestureRecognizer : NSPanGestureRecognizer

@property (retain, nonatomic) NSEvent *mouseDownEvent;

- (void)mouseDown:(id)a0;
- (void)dealloc;
- (void)uxCancel;

@end
