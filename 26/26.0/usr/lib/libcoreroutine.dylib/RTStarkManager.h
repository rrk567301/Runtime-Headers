@class RTDefaultsManager;

@interface RTStarkManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

+ (BOOL)supportsNotificationName:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)connectionStateToString:(long long)a0;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDefaultsManager:(id)a0;
- (void)_fetchConnectionStateWithHandler:(id /* block */)a0;
- (void)fetchConnectionStateWithHandler:(id /* block */)a0;

@end
