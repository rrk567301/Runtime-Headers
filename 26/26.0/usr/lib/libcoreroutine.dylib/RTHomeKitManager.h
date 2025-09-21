@class NSArray, HMHomeManager, NSString;

@interface RTHomeKitManager : RTService <HMHomeManagerDelegate>

@property (retain, nonatomic) HMHomeManager *homeManager;
@property (retain, nonatomic) NSArray *homes;
@property (nonatomic) BOOL homeManagerDidUpdateHomes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_setup;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_fetchHomesWithHandler:(id /* block */)a0;
- (void)_updateCachedHomes;
- (void)fetchHomesWithHandler:(id /* block */)a0;

@end
