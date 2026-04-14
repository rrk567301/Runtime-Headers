@class NSString;

@interface AuRA_ResourceArbitratorPriv : NSObject <AuRA_ResourceArbitrator> {
    struct shared_ptr<caulk::reactor<aura::itf::ResourceArbitrator *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _itfResourceArbitrator;
    struct shared_ptr<aura::ResourceArbitrator> { struct ResourceArbitrator *__ptr_; struct __shared_weak_count *__cntrl_; } _cppResourceArbitrator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)devices;
- (id)drivers;
- (id)boxes;
- (id)clocks;
- (id)IOControllers;
- (id)setMuteRecords:(id)a0;
- (id)supportedModes:(id)a0;
- (BOOL)unpublishAggregateDevice:(id)a0 error:(id *)a1;
- (BOOL)changeConfiguration:(id)a0 complete:(id /* block */)a1 error:(id *)a2;
- (struct shared_ptr<aura::ResourceArbitrator> { struct ResourceArbitrator *x0; struct __shared_weak_count *x1; })cppResourceArbitrator;
- (BOOL)createFakeDevice:(id)a0 completionHandler:(id /* block */)a1 error:(id *)a2;
- (id)createReflectorPort:(unsigned long long)a0 type:(unsigned int)a1 order:(unsigned int)a2 port:(id)a3 error:(id *)a4;
- (id)createReflectorPorts:(unsigned long long)a0 type:(unsigned int)a1 order:(unsigned int)a2 direction:(unsigned char)a3 error:(id *)a4;
- (void)destroyFakeDevices:(id)a0;
- (id)getDefaultIOTopology:(unsigned int)a0 error:(id *)a1;
- (id)getMuteRecords;
- (id)getScalarVolumeRecords;
- (id)initWithEnvironment:(struct shared_ptr<caulk::reactor<aura::env::Environment *>> { void *x0; struct __shared_weak_count *x1; })a0 systemContext:(struct shared_ptr<aura::hal::SystemContext> { struct SystemContext *x0; struct __shared_weak_count *x1; })a1;
- (id)initWithReactor:(struct shared_ptr<caulk::reactor<aura::itf::ResourceArbitrator *>> { void *x0; struct __shared_weak_count *x1; })a0;
- (id)lookupAggregateDevice:(id)a0 error:(id *)a1;
- (id)lookupIOTopology:(id)a0 error:(id *)a1;
- (unsigned int)portDiscoveryState;
- (BOOL)publishAggregateDevice:(id)a0 error:(id *)a1;
- (BOOL)publishIOTopology:(id)a0 error:(id *)a1;
- (id)publishedAggregateDevices;
- (id)publishedIOTopologies;
- (BOOL)registerAudioStatisticsReporters:(unsigned long long)a0 audioStatisticsReporters:(id)a1 error:(id *)a2;
- (id)registerClientProcess:(id)a0 error:(id *)a1;
- (BOOL)registerSession:(unsigned long long)a0 process:(id)a1 error:(id *)a2;
- (BOOL)resetDefaultIOTopology:(unsigned int)a0 transient:(BOOL)a1 error:(id *)a2;
- (id)sessionIOControllers:(unsigned long long)a0;
- (id)sessionVirtualPorts:(unsigned long long)a0;
- (BOOL)setConfigurationChangeNotifier:(id /* block */)a0 error:(id *)a1;
- (BOOL)setDefaultIOTopology:(unsigned int)a0 source:(unsigned int)a1 UID:(id)a2 transient:(BOOL)a3 error:(id *)a4;
- (BOOL)setDefaultIOTopologyChangeNotifier:(id /* block */)a0 error:(id *)a1;
- (BOOL)setPortDiscoveryState:(unsigned int)a0 error:(id *)a1;
- (id)setScalarVolumeRecords:(id)a0;
- (BOOL)setSupplementalIOTopology:(id)a0 masterVirtualPort:(id)a1 complete:(id /* block */)a2 error:(id *)a3;
- (id)simulateConfigurationChange:(id)a0 error:(id *)a1;
- (id)simulatePortEligibility:(id)a0 error:(id *)a1;
- (id)supportedCategories;
- (BOOL)unpublishIOTopology:(id)a0 error:(id *)a1;
- (BOOL)unregisterClientProcess:(id)a0 error:(id *)a1;
- (BOOL)unregisterSession:(unsigned long long)a0 error:(id *)a1;
- (id)virtualPorts;

@end
