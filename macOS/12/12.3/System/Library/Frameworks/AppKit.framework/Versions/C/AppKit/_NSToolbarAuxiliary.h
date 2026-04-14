@class NSArray, NSDictionary, NSString;

@interface _NSToolbarAuxiliary : NSObject {
    NSArray *draggedTypes;
    double windowOriginOffsetWhenHidingHint;
    struct __NSToolbarMetrics { struct __NSToolbarLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; } x0; struct __NSToolbarItemLayoutMetrics { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; } x1; } *savedMetrics;
    NSDictionary *identifiedItems;
    NSArray *defaultItems;
    NSArray *allowedItems;
    NSArray *selectableItems;
    NSString *centeredItemIdentifier;
    double preferredPrincipalWidthRatio;
    double minimumInlineWindowTitleWidth;
    struct { unsigned char wiringNibConnections : 1; unsigned char firstMoveableItemIndex : 6; unsigned char isPaletteToolbar : 1; unsigned char overflowMenuUsesAllItems : 1; unsigned int reserved : 23; } _tbaFlags;
    unsigned short _fullScreenAuxiliaryViewForceVisibleCounter;
    double auxMinHeight;
    double auxMaxHeight;
    double autohideHeight;
    unsigned long long originalAutoresizingMask;
    NSString *_toolbarDragToken;
}

@end
