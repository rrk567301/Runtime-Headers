@class NSString, NSPointerArray;
@protocol MTVisualStyleSetProviding;

@interface MTCoreMaterialVisualStylingProvider : NSObject

@property (readonly, copy, nonatomic) NSString *visualStyleSetName;
@property (retain, nonatomic, getter=_visualStyleSet, setter=_setVisualStyleSet:) id<MTVisualStyleSetProviding> visualStyleSet;
@property (retain, nonatomic, getter=_observers) NSPointerArray *observers;

+ (char)canGenerateVisualStyleSetFromRecipe:(id)a0;
+ (id)coreMaterialVisualStylingProviderForRecipe:(id)a0 andCategory:(id)a1;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:(id)a0 inBundle:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_notifyObserversWithBlock:(id /* block */)a0;
- (char)updateVisualStyleSetFromRecipe:(id)a0 andCategory:(id)a1;
- (char)updateVisualStyleSetGeneratedFromRecipe:(id)a0;
- (id)visualStylingForStyle:(id)a0;

@end
