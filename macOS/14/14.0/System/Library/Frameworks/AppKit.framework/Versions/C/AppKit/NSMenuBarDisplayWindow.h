@class NSArray, NSMenuBarImpl, NSMenuBarRepresentation, NSMutableArray;

@interface NSMenuBarDisplayWindow : NSObject {
    NSMenuBarImpl *_menuBarImpl;
    NSMenuBarRepresentation *_associatedRepresentation;
    NSMutableArray *_replicantWindows;
    NSMutableArray *_replicantWindowReuseStack;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _apertureFrame;
    double _backingScaleFactor;
    unsigned int _displayID;
    BOOL _isGroupingChanges;
    BOOL _isVisible;
}

@property (nonatomic, setter=setVisible:) BOOL isVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } apertureFrame;
@property (nonatomic) double backingScaleFactor;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) NSArray *replicantWindows;
@property (readonly, weak, nonatomic) NSMenuBarRepresentation *associatedRepresentation;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_applyBackingScaleFactorIfNeeded;
- (void)_applyFrameToReplicants;
- (void)_ensureReplicantWindows;
- (void)_orderWindowFrontInAppKitOnly:(id)a0;
- (void)_reconfigDisplay;
- (void)_removeAllReplicants;
- (void)beginGrouping;
- (void)endGrouping;
- (void)forEachHostedWindowDo:(id /* block */)a0;
- (id)initWithImpl:(id)a0 onDisplay:(unsigned int)a1;
- (void)replaceImpl:(id)a0;

@end
