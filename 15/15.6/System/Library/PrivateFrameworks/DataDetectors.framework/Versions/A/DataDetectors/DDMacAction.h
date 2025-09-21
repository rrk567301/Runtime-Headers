@class NSString, NSMutableArray;

@interface DDMacAction : NSObject {
    NSMutableArray *_actions;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) char hasDynamicName;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *actionUTI;
@property (readonly, nonatomic) char alternate;
@property (readonly, nonatomic) char isImmediate;

+ (id)actionForDictionary:(id)a0 inBundle:(id)a1;

- (void).cxx_destruct;
- (char)displaysUI;
- (id)formattedURLForResult:(struct __DDResult { } *)a0;
- (id)initWithDict:(id)a0 bundle:(id)a1;
- (id)menuItemForResult:(struct __DDResult { } *)a0 textCheckingResult:(id)a1 URL:(id)a2 uiReady:(char)a3 context:(id)a4 actionTarget:(id)a5;
- (id)rawMenuItemForContext:(id)a0;
- (char)runForResult:(struct __DDResult { } *)a0 context:(id)a1;
- (char)runForTextCheckingResult:(id)a0 context:(id)a1;
- (char)runForURL:(id)a0 context:(id)a1;
- (void)updateQuickActionDataInRepresentedObject:(id)a0 forResult:(struct __DDResult { } *)a1 textCheckingResult:(id)a2 URL:(id)a3 context:(id)a4 menuItem:(id)a5;

@end
