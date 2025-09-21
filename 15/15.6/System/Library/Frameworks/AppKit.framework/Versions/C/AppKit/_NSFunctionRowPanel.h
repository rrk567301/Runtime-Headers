@class NSFunctionRow;

@interface _NSFunctionRowPanel : NSPanel {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (char)_hiddenInWindowList;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_dumpLayer;
- (char)_isEffectivelyVisible;
- (char)_isFunctionRowWindow;
- (char)_windowManagerAware;
- (double)backingScaleFactor;
- (id)colorSpace;
- (char)hasKeyAppearance;
- (id)initWithFunctionRow:(id)a0;
- (char)isVisible;
- (char)worksWhenModal;

@end
