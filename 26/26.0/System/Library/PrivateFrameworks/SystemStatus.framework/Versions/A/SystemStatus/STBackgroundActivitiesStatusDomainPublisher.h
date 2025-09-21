@interface STBackgroundActivitiesStatusDomainPublisher : STUserInteractionHandlingStatusDomainPublisher

+ (id)emptyChangeContext;
+ (unsigned long long)statusDomainName;
+ (id)emptyData;

- (void)updateData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setVolatileData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)updateVolatileData:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setData:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;

@end
