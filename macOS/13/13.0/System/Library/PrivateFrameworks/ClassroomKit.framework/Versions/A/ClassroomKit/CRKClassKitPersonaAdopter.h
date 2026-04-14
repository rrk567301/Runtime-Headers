@class NSString, NSMutableArray, CRKClassKitCurrentUserProvider;
@protocol CRKPersonaBlockPerforming;

@interface CRKClassKitPersonaAdopter : NSObject

@property (readonly, nonatomic) id<CRKPersonaBlockPerforming> personaBlockPerformer;
@property (readonly, nonatomic) CRKClassKitCurrentUserProvider *currentUserProvider;
@property (readonly, nonatomic) NSMutableArray *stashedBlocks;
@property (copy, nonatomic) NSString *currentPersonaUniqueString;

+ (id)currentUserProviderObservedKeyPaths;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithClassKitFacade:(id)a0 personaBlockPerformer:(id)a1;
- (void)performBlockWithClassKitPersona:(id /* block */)a0;
- (void)callStashedBlocksIfPersonaFetched;
- (void)callStashedBlocks;
- (BOOL)personaFetched;
- (id)captureStashedBlocks;
- (void)currentUserChanged;

@end
