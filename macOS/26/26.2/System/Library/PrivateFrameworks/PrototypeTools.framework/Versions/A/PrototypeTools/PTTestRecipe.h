@class NSString, PTTestRecipeInfo;

@interface PTTestRecipe : NSObject

@property (retain, nonatomic) PTTestRecipeInfo *info;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ prepareBlock;
@property (copy, nonatomic) id /* block */ cleanupBlock;

- (void)invalidate;
- (void)_handleEvent:(long long)a0;
- (BOOL)_wantsEvent:(long long)a0;
- (void)_deactivate;
- (void).cxx_destruct;
- (void)_activate;
- (id)_initWithTitle:(id)a0 prepareBlock:(id /* block */)a1 cleanupBlock:(id /* block */)a2;

@end
