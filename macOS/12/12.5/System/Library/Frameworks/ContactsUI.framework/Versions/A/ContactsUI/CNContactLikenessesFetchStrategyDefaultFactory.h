@class PRPersonaStore, CNUIPRLikenessResolver, CNUIMeContactMonitor;
@protocol CNUIParentContainerCache;

@interface CNContactLikenessesFetchStrategyDefaultFactory : NSObject <CNContactLikenessesFetchStrategyFactory>

@property (retain, nonatomic) id<CNUIParentContainerCache> parentContainerCache;
@property (retain, nonatomic) CNUIMeContactMonitor *meContactMonitor;
@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) CNUIPRLikenessResolver *likenessResolver;

- (void).cxx_destruct;
- (id)strategyForContact:(id)a0;
- (id)initWithMeContactMonitor:(id)a0 personaStore:(id)a1 likenessResolver:(id)a2 parentContainerCache:(id)a3;

@end
