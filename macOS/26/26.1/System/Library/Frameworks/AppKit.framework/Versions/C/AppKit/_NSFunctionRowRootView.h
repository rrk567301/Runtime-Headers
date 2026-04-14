@class NSFunctionRow;

@interface _NSFunctionRowRootView : NSFunctionRowBackgroundColorView {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (id)keyPathsForValuesAffectingFunctionRow;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (id)accessibilityParentAttribute;
- (id)initWithFunctionRow:(id)a0;

@end
