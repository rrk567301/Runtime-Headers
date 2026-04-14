@class NSFunctionRow;

@interface _NSFunctionRowPanel : NSPanel {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (BOOL)_hiddenInWindowList;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_dumpLayer;
- (id)_functionRowContext;
- (BOOL)_isEffectivelyVisible;
- (BOOL)_isFunctionRowWindow;
- (double)backingScaleFactor;
- (id)colorSpace;
- (BOOL)hasKeyAppearance;
- (id)initWithFunctionRow:(id)a0;
- (BOOL)isVisible;
- (BOOL)worksWhenModal;

@end
