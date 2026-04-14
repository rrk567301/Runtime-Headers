@class NSFunctionRow;

@interface _NSFunctionRowPanel : NSPanel {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (BOOL)_hiddenInWindowList;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (id)colorSpace;
- (double)backingScaleFactor;
- (BOOL)hasKeyAppearance;
- (BOOL)worksWhenModal;
- (BOOL)_isEffectivelyVisible;
- (id)_functionRowContext;
- (BOOL)_isFunctionRowWindow;
- (id)_dumpLayer;
- (id)initWithFunctionRow:(id)a0;

@end
