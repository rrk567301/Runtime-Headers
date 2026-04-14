@class NSFunctionRow;

@interface _NSFunctionRowRootView : NSFunctionRowBackgroundColorView {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (id)keyPathsForValuesAffectingFunctionRow;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)accessibilityParentAttribute;
- (id)initWithFunctionRow:(id)a0;

@end
