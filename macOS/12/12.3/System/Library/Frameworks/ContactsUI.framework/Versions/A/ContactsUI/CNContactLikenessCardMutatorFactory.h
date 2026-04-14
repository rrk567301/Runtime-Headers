@class NSString, PRPersonaStore, CNUIMeContactMonitor, CNSchedulerProvider;
@protocol ABCardViewImageDataSource;

@interface CNContactLikenessCardMutatorFactory : NSObject <CNContactLikenessMutatorFactory>

@property (retain, nonatomic) id<ABCardViewImageDataSource> dataSource;
@property (retain, nonatomic) PRPersonaStore *personaStore;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (retain, nonatomic) CNSchedulerProvider *schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)personaAndCardViewMutatorForPersonaStore:(id)a0 dataSource:(id)a1 contact:(id)a2 meMonitor:(id)a3 scheduler:(id)a4;

- (void).cxx_destruct;
- (id)likenessMutatorForContact:(id)a0 likeness:(id)a1 mutationType:(long long)a2;
- (id)initWithDataSource:(id)a0 personaStore:(id)a1 meMonitor:(id)a2 schedulerProvider:(id)a3;

@end
