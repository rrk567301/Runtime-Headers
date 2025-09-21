@class NSString, NSArray, COCluster;
@protocol COClusterResolverDelegate;

@interface COClusterResolver : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<COClusterResolverDelegate> delegate;
@property (retain, nonatomic) NSString *currentIdentifier;
@property (nonatomic) char activatedCluster;
@property (nonatomic) char bootstrapCompleted;
@property (retain, nonatomic) NSArray *waitingForBootstrap;
@property (readonly, nonatomic) COCluster *cluster;

+ (id)resolverForCluster:(id)a0 delegate:(id)a1;

- (id)description;
- (void)_activate;
- (void).cxx_destruct;
- (void)activate;
- (void)_withLock:(id /* block */)a0;
- (void)_delegateNotifyClusterIdentifierChanged:(id)a0;
- (id)_initWithCluster:(id)a0 delegate:(id)a1;
- (void)_invokeBootstrapBlocks;
- (char)_updateIdentifier:(id)a0;

@end
