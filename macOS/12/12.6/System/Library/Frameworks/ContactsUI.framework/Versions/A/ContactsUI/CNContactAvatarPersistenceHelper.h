@class CNContactStore, CNContactAvatarViewController, AKCardViewDataSource, NSString, PRPersonaStore, CNUIMeContactMonitor, CNRecentLikenessesDataSourceDelayedEditDecorator;
@protocol CNSchedulerProvider, CNCancelable;

@interface CNContactAvatarPersistenceHelper : NSObject <NSObject>

@property (retain, nonatomic) id<CNCancelable> recentLikenessesToken;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) PRPersonaStore *personaStore;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNUIMeContactMonitor *meMonitor;
@property (readonly, nonatomic) CNRecentLikenessesDataSourceDelayedEditDecorator *recentLikenessesDataSource;
@property (readonly, nonatomic) CNContactAvatarViewController *avatarViewController;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) AKCardViewDataSource *cardViewDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0 avatarViewController:(id)a1;
- (id)makeDefaultLikenessFetchtSrategyFactoryWithCache:(id)a0;
- (void)beginPropagatingInMemoryChangesToAvatar;
- (id)makeLikensssResovler;

@end
