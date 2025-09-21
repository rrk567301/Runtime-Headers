@class NSFunctionRow;

@interface _NSFunctionRowPanel : NSPanel {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (BOOL)_hiddenInWindowList;

- (id)colorSpace;
- (void)dealloc;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (id)_dumpLayer;
- (BOOL)_isEffectivelyVisible;
- (BOOL)_isFunctionRowWindow;
- (BOOL)_windowManagerAware;
- (double)backingScaleFactor;
- (BOOL)hasKeyAppearance;
- (id)initWithFunctionRow:(id)a0;
- (BOOL)worksWhenModal;

@end
