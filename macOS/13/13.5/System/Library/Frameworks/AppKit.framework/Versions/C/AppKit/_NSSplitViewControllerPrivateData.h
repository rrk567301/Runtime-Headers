@class NSMutableArray;

@interface _NSSplitViewControllerPrivateData : NSObject {
    double _minimumThicknessForInlineSidebars;
    id _localEdgeHoverEventMonitor;
    id _globalEdgeHoverEventMonitor;
    struct { unsigned char hidesFirstDivider : 1; unsigned char hidesLastDivider : 1; unsigned char settingSplitViewItems : 1; unsigned char hasItemToEdgeReveal : 1; unsigned char considersWindowMinSizeWhenGrowing : 1; } _flags;
}

@property (retain) NSMutableArray *splitViewItems;

- (void)dealloc;

@end
