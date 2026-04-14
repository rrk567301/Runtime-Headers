@class NSMutableArray;

@interface SCTCarbonMenu : NSObject {
    NSMutableArray *mMenuPath;
}

+ (int)closeShowcasedMenu:(id)a0;
+ (void)showcaseMenu:(id)a0 andShiftFocus:(BOOL)a1;

- (void)dealloc;
- (id)description;
- (void)hide:(id)a0;
- (void)show;
- (id)initWithMenu:(struct OpaqueMenuRef { } *)a0 item:(unsigned short)a1 withParentMenu:(id)a2;
- (void)validateMenuPath;
- (id)leafItem;
- (id)menuPath;
- (id)menuTitlePath;
- (void)openMenuFromDepth:(int)a0 shiftFocus:(BOOL)a1;
- (int)closeMenuToIntersectionWithNewMenu:(id)a0;
- (void)showAndShiftFocus;

@end
