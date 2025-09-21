@class NSView;

@interface CPKScrollEnclosureView : NSView

@property (retain, nonatomic) NSView *auxiliaryView;

- (void)dealloc;
- (void)adjustAuxiliaryView:(char)a0;
- (void)setAuxiliaryView:(id)a0 isRTL:(char)a1;

@end
