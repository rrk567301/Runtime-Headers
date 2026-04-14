@class NSFunctionRow;

@interface _NSFunctionRowPanel : NSPanel {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (BOOL)_hiddenInWindowList;

- (BOOL)isVisible;
- (id)colorSpace;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_dumpLayer;
- (BOOL)_isEffectivelyVisible;
- (BOOL)_isFunctionRowWindow;
- (BOOL)_windowManagerAware;
- (double)backingScaleFactor;
- (BOOL)hasKeyAppearance;
- (id)initWithFunctionRow:(id)a0;
- (BOOL)worksWhenModal;

@end
