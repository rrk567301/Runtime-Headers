@interface NSFunctionRow : NSObject

@property (class, readonly, getter=isDynamicFunctionRowAvailable) BOOL dynamicFunctionRowAvailable;

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
+ (id)activeFunctionRows;
+ (id)_topLevelFunctionRowViews;
+ (void)addActiveFunctionRow:(id)a0;
+ (void)removeActiveFunctionRow:(id)a0;
+ (void)markActiveFunctionRowsAsDimmed:(BOOL)a0;
+ (id)makeSystemFunctionRowForTouchBar:(id)a0 systemType:(long long)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultFrameForType:(long long)a0;
+ (id)functionRowContentViewForContextID:(unsigned int)a0;
+ (id)associatedScreenAndDisplay:(int *)a0;
+ (int)associatedDisplay;

- (id)device;
- (id)touches;
- (id)_dumpLayer;
- (struct CGPoint { double x0; double x1; })convertPointToDevice:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointFromDevice:(struct CGPoint { double x0; double x1; })a0;

@end
