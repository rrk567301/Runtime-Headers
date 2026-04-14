@interface STBackgroundActivitiesStatusDomainPublisher : STUserInteractionHandlingStatusDomainPublisher

+ (id)emptyData;
+ (unsigned long long)statusDomainName;
+ (id)emptyChangeContext;

- (void)setVolatileData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)updateData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateVolatileData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
