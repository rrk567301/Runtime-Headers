@class NSArray, NSString;

@interface PXActionGroup : PXAction

@property (retain, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *actionNameLocalizationKey;
@property (copy, nonatomic) NSString *localizedActionName;

- (id)init;
- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)initWithActions:(id)a0;
- (void)performUndo:(id /* block */)a0;
- (void)performRedo:(id /* block */)a0;

@end
