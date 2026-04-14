@class NSString, STLocalStatusServer;

@interface _STInternalQueueLocalStatusServerWrapper : NSObject <STStatusDomainPublisherServerHandle>

@property (readonly, nonatomic) STLocalStatusServer *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)replaceDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (id)publishedDataForDomain:(unsigned long long)a0;
- (void)removePublisherClient:(id)a0 forDomain:(unsigned long long)a1;
- (void)replaceVolatileDataChangeRecord:(id)a0 forPublisherClient:(id)a1 completion:(id /* block */)a2;
- (id)publishedVolatileDataForDomain:(unsigned long long)a0;
- (id)initWithServer:(id)a0;
- (void)publishData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)updateVolatileDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)publishVolatileData:(id)a0 forPublisherClient:(id)a1 domain:(unsigned long long)a2 withChangeContext:(id)a3 completion:(id /* block */)a4;
- (void)updateDataForPublisherClient:(id)a0 domain:(unsigned long long)a1 usingDiffProvider:(id /* block */)a2 completion:(id /* block */)a3;
- (void)registerPublisherClient:(id)a0 forDomain:(unsigned long long)a1 fallbackData:(id)a2;

@end
