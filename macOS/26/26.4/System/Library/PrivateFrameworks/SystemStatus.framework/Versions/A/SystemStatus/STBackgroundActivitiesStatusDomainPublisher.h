@interface STBackgroundActivitiesStatusDomainPublisher : STUserInteractionHandlingStatusDomainPublisher

+ (id)emptyChangeContext;
+ (id)emptyData;
+ (unsigned long long)statusDomainName;

- (void)setData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)updateData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateVolatileData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setVolatileData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
