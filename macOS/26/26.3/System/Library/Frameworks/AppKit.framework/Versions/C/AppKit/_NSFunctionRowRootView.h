@class NSFunctionRow;

@interface _NSFunctionRowRootView : NSFunctionRowBackgroundColorView {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (id)keyPathsForValuesAffectingFunctionRow;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)accessibilityParentAttribute;
- (id)initWithFunctionRow:(id)a0;

@end
