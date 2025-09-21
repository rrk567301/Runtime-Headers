@class NSSet, NSMutableArray, RMObserverStore;

@interface RMUILegacyProfilesViewModelProvider : NSObject

@property (readonly, nonatomic) long long scope;
@property (retain, nonatomic) NSMutableArray *profileViewModels;
@property (retain, nonatomic) RMObserverStore *observerStore;
@property (retain, nonatomic) NSSet *filterDeclarationIdentifiers;

- (id)initWithScope:(long long)a0;
- (void).cxx_destruct;
- (void)_updateViewModelsWithDeclarations:(id)a0;
- (void)loadProfilesFromConfigurationsWithCompletionHandler:(id /* block */)a0;

@end
